#include "main.h"

/**
* _printf - produces output according to a format.
* @format: print format (a character string)
* Return: number of characters printed
*/
int _printf(const char *format, ...)
{
	int i = 0, k = 0;
	va_list list;

	va_start(list, format);

	if (format == NULL)
		return (-1);

	for (; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			int (*f)(va_list l) = get_func(format[i + 1]);

			if (f != NULL)
			{
				int n = f(list);
				if (n != 0)
					k += n;
			}
			i++;
		}
		else
		{
			_putchar(format[i]);
			k++;
		}
	}
	va_end(list);
	return (k);
}
