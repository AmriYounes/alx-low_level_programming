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
	char *lett = letters;
	int i = 0;

	while (*p != '\0')
	{
		for (i; lett[i] != '\0'; i++)
		{
			if (*p == lett[i] || *p == lett[i] - 32)
				*p = numbers[i];
		}
		i = 0;
		p++;
	}

	return (s);
}

