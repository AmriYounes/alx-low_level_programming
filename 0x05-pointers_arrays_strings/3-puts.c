#include "main.h"


/**
 * _puts - Prints a string followed by a newline.
 * @str: Pointer to the string.
 */
void _puts(char *str)
{
	char *p = str;

	while (*p != '\0')
	{
		_putchar(*p);
		p++;
	}
	_putchar('\n');
}
