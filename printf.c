#include "main.h"

/**
* _printf - produces output according to a format.
* @format: print format (a character string)
* Return: number of characters printed
*/
int _printf(const char *format, ...)
{
	int i = 0, j = 0, k = 0;
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
					j = 0;
					str = va_arg(list, char *);
					for (; str[j] != '\0'; j++)
					{
						_putchar(str[j]);
						k++;
					}
					break;
				case '%':
					_putchar('%');
					k++;
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
