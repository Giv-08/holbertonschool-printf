#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>

/**
 * struct specifier - Struct to map format specifiers
 * to their corresponding functions.
 * @specifier: The format specifier as a string
 * @printf_sp: Function pointer to the handler
 * function that processes the specifier.
 */

typedef struct specifier
{
	char *specifier;
	int (*printf_sp)(va_list);
} specifier_t;

void _putchar(char c);
int _printf(const char *format, ...);
int print_char(va_list args);
int print_string(va_list args);
int print_int(va_list args);
int print_percent(va_list args);
int (*get_specifier(char s))(va_list);

#endif
