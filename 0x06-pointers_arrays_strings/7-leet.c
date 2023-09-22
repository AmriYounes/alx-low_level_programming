#include "main.h"

/**
 * leet - Converts certain letters to their numbers based on the leet (1337).
 * @s: Pointer to the string.
 *
 * Return: Pointer to the modified string.
 */
char *leet(char *s)
{
	char *p = s;
	char *letters = "aeotl";
	char *numbers = "43071";
	int i;

	while (*p != '\0')
	{
		for (i = 0; letters[i] != '\0'; i++)
		{
			if (*p == letters[i] || *p == letters[i] - 32)
				*p = numbers[i];
		}
		p++;
	}

	return (s);
}

