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

void print_int(va_list arg)
{
	int num = va_arg(arg, int);
	unsigned int pos_num;
	int total_in_number = 1;

	if (num < 0)
	{
		_putchar('-');
		pos_num = -num;
	}
	else
	{
		pos_num = num;
	}

	while (pos_num / total_in_number >= 10)
	{
		total_in_number = total_in_number * 10;
	} 

	while (total_in_number > 0)
	{
		_putchar((pos_num / total_in_number) + '0');
		pos_num = pos_num % total_in_number;
		total_in_number /= 10;
	}
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
