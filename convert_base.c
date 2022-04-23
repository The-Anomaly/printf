#include "main.h"

/**
* convert - convert decimal to given base
* @n: input decimal
* @b: input base
* Return: number of digits
*/
int convert(unsigned long int n, unsigned int b)
{
	int count = 0;
	if (n >= b)
		count += convert(n/b, b);

	_putchar(n % b + '0');
	count++;
	return (count);
}
