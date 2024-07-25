#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _printf - produces output according to a format.
 * @format: is a string with format specifiers.
 *
 * Return: the number of characters printed.
 *
 */
int _printf(const char *format, ...)
{
	va_list args;
	int printed_chars = 0;
       	int (*printf_sp)(va_list args);

	va_start(args, format);

	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == '\0')
				break;

			printf_sp = get_specifier(*format);

			if (printf_sp)
			{
				int len = printf_sp(args);
				printed_chars += len;
			}
		       	else
			{
				_putchar('%');
				_putchar(*format);
				printed_chars += 2;
			}
		}
		else
		{
			_putchar(*format);
			printed_chars++;
		}
		format++;
    }
	va_end(args);
	return (printed_chars);
}
