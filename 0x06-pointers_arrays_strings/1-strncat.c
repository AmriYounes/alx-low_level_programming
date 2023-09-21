#include "main.h"

/**
 * _strncat - Concatenates two strings, limiting the number of characters.
 * @dest: Pointer to the destination string.
 * @src: Pointer to the source string.
 * @n: Maximum number of characters to be copied from source.
 *
 * Return: Pointer to the destination string.
 */
char *_strncat(char *dest, char *src, int n)
{
	char *d = dest;
	char *s = src;

	while (*d != '\0')
		d++;

	while (*s != '\0' && n--)
	{
		*d = *s;
		d++;
		s++;
	}

	*d = '\0';
	return (dest);
}

