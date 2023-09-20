#include "main.h"

/**
 * _strcpy - Copies a string from source to destination.
 * @dest: Pointer to the destination string.
 * @src: Pointer to the source string.
 * Return: Pointer to the destination string.
 */
char *_strcpy(char *dest, const char *src)
{
	char *d = dest;
	char *s = src;

	while (*s != '\0')
	{
		*d = *s;
		d++;
		s++;
	}

	*d = '\0';

	return (dest);
}

