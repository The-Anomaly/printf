#include "main.h"

/**
* print_bin - print binary numbers
* @l: input
* Return: number of binary digits
*/
int print_bin(va_list l)
{
	unsigned int n = va_arg(l, unsigned int);

	return (convert(n, 2));
}

/**
* print_oct - print octal numbers
* @l: input
* Return: number of octal digits
*/
int print_oct(va_list l)
{
	unsigned int n = va_arg(l, unsigned int);

	return (convert(n, 8));
}
