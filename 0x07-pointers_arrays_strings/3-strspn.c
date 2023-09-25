#include "main.h"

/**
 * _strspn - Calculates the length of the initial segment of s
 *            that consists of only characters from accept.
 * @s: Pointer to the string to be searched.
 * @accept: Pointer to the string containing the characters to match.
 *
 * Return: Length of the initial segment of s consisting of only characters
 *         from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int length = 0;
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				length++;
				break;
			}
		}
		if (accept[j] == '\0')
			break;
	}

	return (length);
}

