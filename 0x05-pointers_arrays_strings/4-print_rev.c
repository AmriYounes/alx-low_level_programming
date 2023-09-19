#include "main.h"

/**
 * print_rev - Prints a string in reverse.
 * @s: Pointer to the string.
 */
void print_rev(char *s)
{
	if (*s == '\0')
		return;

	print_rev(s + 1);

	_putchar(*s);
}
