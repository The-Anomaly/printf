#include "main.h"

/**
* print_string - prints a string
* @l: va list argument
* Return: length of string
*/
int print_string(va_list l)
{
	int j = 0;
	char *str = va_arg(l, char *);

	if (!str)
		return (0);

	for (; str[j] != '\0'; j++)
	{
		_putchar(str[j]);
	}
	return (j);
}

/**
* print_char - print a character
* @l: va list argument
* Return: Always 1
*/
int print_char(va_list l)
{
	char c = va_arg(l, int);

	if (!c)
		return (0);
	_putchar(c);
	return (1);
}

/**
* print_percent - print percent
* @l: va list argument
* Return: Always 1
*/
int print_percent(va_list l)
{
	l = l;
	_putchar('%');
	return (1);
}
