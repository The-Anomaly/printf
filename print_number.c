#include "main.h"

/**
* print_number - print integers
* @l: va list argument
* Return: Length of number
*/
int print_number(va_list l)
{
	int n = va_arg(l, int);
	int num = n, len = 0, m, o, count = 1;

	if (n < 0)
	{
		_putchar(45);
		m = n * -1;
	}
	else
	{
		m = n;
	}

	o = m;

	while (m > 9)
	{
		m /= 10;
		count *= 10;
	}

	for (; count >= 1; count /= 10)
	{
		_putchar(((o / count) % 10) + '0');
	}
	if (num <= 0)
	{
		len++;
		num = num * -1;
	}
	while (num > 0)
	{
		num /= 10;
		len++;
	}
	return (len);
}
