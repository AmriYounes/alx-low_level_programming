#include "main.h"

/**
 * cap_string - Capitalizes String after certain punctuation marks.
 * @s: Pointer to the string.
 *
 * Return: Pointer to the modified string.
 */
char *cap_string(char *s)
{
	char *p = s;

	while (*p != '\0')
	{
		if (*p == ',' || *p == ';' || *p == '.' || *p == '!' ||
		*p == '?' || *p == '"' || *p == '(' || *p == ')' || *p == '{'
		|| *p == '}')
		{
			if (*(p + 1) >= 'a' && *(p + 1) <= 'z')
			*(p + 1) -= 32;
		}
		p++;
	}
	return (s);
}

