#include "main.h"

/**
 * _strpbrk - Searches a string for the first occurrence of any character
 *            from the specified set.
 * @s: Pointer to the string to be searched.
 * @accept: Pointer to the string containing the characters to search for.
 *
 * Return: Pointer to the first occurrence of any character from accept in s,
 *         or NULL if no match is found.
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		char *p = accept;

		while (*p != '\0')
		{
			if (*s == *p)
				return (s);

			p++;
		}

		s++;
	}

	return (NULL);
}

