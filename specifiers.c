#include <stdio.h>
#include "main.h"
#include "stdarg.h"

/**
 * print_char - prints char
 * @c: take char 'c' as an argument
 */

void print_char(char c)
{
	_putchar(c);
}

/**
 * print_char - prints char
 * @str: take char '*str' as an argument
 */

void print_string(char *str)
{
	int i = 0;
	
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
}

/**
 * print_unsigned - prints char
 * @n: take int 'n' as an argument
 */

void print_unsigned(unsigned int n)
{
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	if (n / 10)
	{
		print_unsigned(n / 10);
	}
	_putchar((n % 10) + 48);
}

/**
 * print_percent - prints a %
 * @p: take char 'p' as an argument
 */

void print_percent(char p)
{
	if (p == '%')
	{
		_putchar('%');
	}
}
