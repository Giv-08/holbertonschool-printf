#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * get_specifer - selects the correct function of the format specifier
 * @s: the specifier character to checl.
 *
 * Return: pointer to the function chosen.
 */
char (*get_specifer(char s))(va_list)
{
	specifier_t conversion[] = {
		{"%", print_percent},
		{"c", print_char},
		{"s", print_string},
		{"d", print_signed_int},
		{"i", print_signed_int},
		{NULL, NULL}
	};

	int i = 0;

	while (conversion[i].specifier != NULL)
	{
		if (s == *conversion[i].specifier)
		{
			return (conversion[i].printf_sp);
		}
		i++;

	return (NULL);
}
