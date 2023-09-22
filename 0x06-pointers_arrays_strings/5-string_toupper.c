#include "main.h"

/**
 * string_toupper - Converts lowercase characters in a string to uppercase.
 * @s: Pointer to the string.
 *
 * Return: Pointer to the modified string.
 */
char *string_toupper(char *s)
{
	char *p = s;

	while (*p != '\0')
	{
		if (*p >= 'a' && *p <= 'z')
			*p -= 32;
		p++;
	}

	return (s);
}
