#include "main.h"

/**
* print_bin(va_list l)
* @l: input
* Return: number of binary digits
*/
int print_bin(va_list l)
{
	unsigned int n = va_arg(l, unsigned int);
	return (convert(n, 2));
}
