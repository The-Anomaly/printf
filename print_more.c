#include "main.h"

/**
* convert_rot13 - encode and print a string using rot13
* @s: input string
*
* Return: number of characters printed
*/
int convert_rot13(char *s)
{
	char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i, j = 0;

	while (s[j] != '\0')
	{
		if (s[j] < 'A' || (s[j] > 'Z' && s[j] < 'a') || s[j] > 'z')
			_putchar(s[j]);
		else
		{
			for (i = 0; i <= 52; i++)
			{
				if (s[j] == alpha[i])
					_putchar(rot13[i]);
			}
		}
		j++;
	}
	return (j);
}

/**
* print_rot13 - print the rot13'ed string
* @l: input argument
* Return: number of characters printed
*/
int print_rot13(va_list l)
{
	char *s = va_arg(l, char *);

	return (convert_rot13(s));
}
