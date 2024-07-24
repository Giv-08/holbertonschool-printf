#include <main.h>
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
       	void (*print_sp)(va_list args);

	va_start(args, format);

	while (*format)
	{
		if (*format == '%')
		{
			format++;
			print_sp= get_specifier(*format);

			if (print_sp)
			{
				print_sp(args);	// Call the appropriate specifier
			}
		       	else
			{
				_putchar('%');
				_putchar(*format);
				printed_chars += 2;  // For the '%' and the specifier character
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
