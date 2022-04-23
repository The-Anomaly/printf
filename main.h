#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stddef.h>

int _putchar(char c);
int _printf(const char *format, ...);
int print_number(va_list l);
int print_string(va_list l);
int print_char(va_list l);
int print_percent(va_list l);

/* Number bases */
int convert(unsigned long int n, unsigned int b);
int print_bin(va_list l);

typedef struct op
{
	char sp;
	int (*f)(va_list l);
} op_t;

int (*get_func(char c))(va_list l);

#endif
