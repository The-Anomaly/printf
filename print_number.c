#include "main.h"
#include <stdio.h>

/**
* count_number - find the number of digits in a number
* @n: input integer
* @s: number sign; 1 if signed, 0 if unsigned
* Return: number of digits
*/
int count_number(int n, int s)
{
	unsigned int len = 0, num = n;

	if (n <= 0)
	{
		if (s == 1)
			len++;
		num = n * -1;
	}
	while (num > 0)
	{
		num /= 10;
		len++;
	}
	return (len);
}

/**
* print_num - helper function that loops through
* an integer and prints all its digits
* @n: integer to be printed
* @s: number sign; 1 if signed, 0 if unsigned
*/
void print_num(int n, int s)
{
	unsigned int n1;

	if (n < 0)
	{
		if (s == 1)
			_putchar('-');
		n1 = -n;
	}
	else
		n1 = n;

	if (n1 / 10)
		print_num(n1 / 10, 1);
	_putchar((n1 % 10) + '0');
}

/**
* print_number - print integers
* @l: va list argument
* Return: Length of number
*/
int print_number(va_list l)
{
	int n = va_arg(l, int);

	print_num(n, 1);
	return (count_number(n, 1));
}

/**
* print_unsigned - print unsigned integer
* @l: va list argument
* Return: Length of number
*/
int print_unsigned(va_list l)
{
	int n = va_arg(l, int);

	print_num(n, 0);
	return (count_number(n, 0));
}
