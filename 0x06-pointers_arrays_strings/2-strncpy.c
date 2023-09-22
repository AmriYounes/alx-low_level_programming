#include "main.h"

/**
 * _strncpy - Copies a specified number of characters from src to dest.
 * @dest: Pointer to the destination string.
 * @src: Pointer to the source string.
 * @n: Maximum number of characters to be copied.
 *
 * Return: Pointer to the destination string.
 */
char *_strncpy(char *dest, const char *src, int n)
{
	char *d = dest;
	const char *s = src;
	int i = 0;

	while (*s != '\0' && i < n)
	{
		*d = *s;
		d++;
		s++;
		i++;
	}

	while (*d != '\0' && i < n)
	{
		*d = '\0';
		d++;
		i++;
	}

	return (dest);
}

