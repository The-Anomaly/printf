#include "main.h"

/**
* get_func - get function for a given conversion specifier
* @c: conversion specifier
* Return: pointer to the appropriate function
*/
int (*get_func(char c))(va_list l)
{
	op_t sp_func[6] = {
	{'c', print_char},
	{'s', print_string},
	{'%', print_percent},
	{'d', print_number},
	{'i', print_number},
	{'b', print_bin},
	};
	int i = 0;

	for (; i < 6; i++)
	{
		if (c == sp_func[i].sp)
			return (sp_func[i].f);
	}

	return (NULL);
}
