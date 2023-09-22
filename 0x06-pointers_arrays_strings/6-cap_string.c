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
	char *symbols = ",;.!?(){}\n\t\" ";
	char *sym = symbols;

	if (*p >= 'a' && *p <= 'z')
		*p -= 32;

	while (*p != '\0')
	{
		while (*sym != '\0')
		{
			if (*p == *sym && *(p + 1) >= 'a' && *(p + 1) <= 'z')
				*(p + 1) -= 32;
			sym++;
		}
		sym = symbols;
		p++;
	}
	return (s);
}

