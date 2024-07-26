#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: 0 on success, error code otherwise
 */
int main(void)
{
	int len, len2;

	len = _printf("%");
	len2 = printf("%");
	fflush(stdout);
	if (len != len2)
	{
		printf("Lengths differ.\n");
		_printf("_printf %d\n", len);
		printf("printf %d\n", len2);
		fflush(stdout);
		return (1);
	}
	return (0);
}
