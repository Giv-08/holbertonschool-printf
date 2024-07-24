#include "main.h"
#include <stdarg.h>
#include <stddef.h>

/**
 * print_char - prints char
 * @args: take 'args' as an argument
 */

void print_char(va_list args)
{
	char c = (char) va_arg(args, int);

	_putchar(c);
}

/**
 * print_string - prints strings
 * @args: take 'args' as an argument
 */

void print_string(va_list args)
{
	int i = 0;
	char *str = va_arg(args, char *);

	if (str == NULL)
	{
		str = "(null)";
	}
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
}

/**
 * print_int - prints integers
 * @args: take 'args' as an argument
 */

void print_int(va_list args)
{
	int n = va_arg(args, int);

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	print_signed_int(n);
}

/**
 * print_signed_int - prints char
 * @n: take 'n' as an argument
 */

void print_signed_int(int n)
{
	if (n / 10)
	{
		print_signed_int(n / 10);
	}
	_putchar(n % 10 + '0');
}

/**
 * print_percent - prints a %
 * @args: take 'args' as an argument
 */

void print_percent(va_list args)
{
	(void)args;

	_putchar('%');
}
