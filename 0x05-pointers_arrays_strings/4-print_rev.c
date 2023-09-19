#include "main.h"

/**
 * print_rev - Prints a string in reverse.
 * @s: Pointer to the string.
 */
void print_rev(char *s)
{
	int length = 0;
	char *p = s;

	while (*p != '\0')
	{
		length++;
		p++;
	}

	while (length >= 0)
	{
		_putchar(*p);
		p--;
		length--;
	}
	_putchar('\n');
}

