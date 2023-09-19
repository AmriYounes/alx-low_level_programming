#include "main.h"

/**
 * _strlen - Calculates the length of a string.
 * @s: Pointer to the string.
 *
 * Return: Length of the string.
 */
int _strlen(char *s)
{
	char *p = s;
	int i = 0;

	while (*p != '\0')
	{
		i++;
		p++;
	}
	return (i);
}
