#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * get_specifier - selects the correct function for the format specifier
 * @s: the specifier character to check
 *
 * Return: pointer to the function chosen.
 */
void (*get_specifier(char s))(va_list)
{
	specifier_t conversion[] = {
		{"%", print_percent},
		{"c", print_char},
		{"s", print_string},
		{"d", print_int},
		{"i", print_int},
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
	}
	return (NULL);
}
