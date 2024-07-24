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

void print_signed(signed int n)
{
	unsigned int num;
	if (n < 0)
	{
		_putchar('-');
		num = -n;
	}
	else
	{
		num = n;
	}
	if (num / 10)
	{
		print_signed(num / 10);
	}
	_putchar((num % 10) + '0');
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
