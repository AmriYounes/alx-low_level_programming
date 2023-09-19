#include "main.h"

/**
 * puts_half - Prints the second half of a string.
 * @str: Pointer to the string.
 */
void puts_half(char *str)
{
	int length = 0;
	int i = 0;
	char *p = str;

	while (*p != '\0')
	{
	    length++;
	    p++;
	}

	p = str + (length + 1) / 2;

	while (*p != '\0')
	{
	    _putchar(*p);
	    p++;
	}

	_putchar('\n');
}

