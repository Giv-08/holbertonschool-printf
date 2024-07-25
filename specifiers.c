#include "main.h"
#include <stddef.h>

/**
 * print_char - prints char
 * @args: take 'args' as an argument
 * Return: 1  indicate that one character was printed
 */

int print_char(va_list args)
{
	_putchar(va_arg(args, int));
	return (1);
}

/**
 * print_string - prints strings
 * @args: take 'args' as an argument
 * Return: string length
 */

int print_string(va_list args)
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
	return (i);
}

/**
 * print_int - prints integers
 * @args: take 'args' as an argument
 * Return: an int
 */

int print_int(va_list args)
{
	int num = va_arg(args, int);
	unsigned int pos_num;
	int len, x = 1, i = 0;

	if (num < 0)
	{
		_putchar('-');
		pos_num = -num;
		i++;
	}
	else
	{
		pos_num = num;
	}

	while (pos_num / x >= 10)
	{
		x = x * 10;
	}

	while (x > 0)
	{
		len = pos_num / x;
		_putchar(len + '0');
		pos_num = pos_num % x;
		x = x / 10;
		i++;
	}
	return (i);
}

/**
 * print_percent - prints a %
 * @args: take 'args' as an argument
 * Return: 1 indicate that one character was printed
 */

int print_percent(va_list args)
{
	(void)args;

	_putchar('%');
	return (1);
}
