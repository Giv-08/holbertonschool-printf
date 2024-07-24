#include <stdarg.h>
#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

/** 
* structure - a new type to print variables
*
*/

typedef struct specifier {
    char *specifier;
    void (*printf_sp)(va_list args);
} specifier_t;

void _putchar(char c);
int _printf(const char *format, ...);
void print_char(va_list args);
void print_string(va_list args);
void print_signed_int(int n);
void print_int(va_list args);
void print_percent(va_list args);
void (*get_specifier(char s))(va_list);

#endif
