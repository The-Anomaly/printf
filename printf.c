#include "main.h"


/**
* print_string - prints a string
* @str: pointer to a string
* Return: length of string
*/
int print_string(char *str)
{
	int j = 0;

	for (; str[j] != '\0'; j++)
	{
		_putchar(str[j]);
	}
	return (j - 1);
}

/**
* _printf - produces output according to a format.
* @format: print format (a character string)
* Return: number of characters printed
*/
int _printf(const char *format, ...)
{
	int i = 0, k = 0;
	char *str;
	va_list list;

	va_start(list, format);
	for (; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			switch (format[i + 1])
			{
				case 'c':
					_putchar(va_arg(list, int));
					k++;
					break;
				case 's':
					str = va_arg(list, char *);
					k = k + print_string(str);
					break;
				case '%':
					_putchar('%');
					k++;
					break;
				case 'd':
					k = k + print_number(va_arg(list, int));
					break;
				case 'i':
					k = k + print_number(va_arg(list, int));
					break;
			}
			i++;
		}
		else
		{
			_putchar(format[i]);
			k++;
		}
	}
	return (k);
}
