#include "main.h"
#include <stdlib.h>

/**
* _strstr - Finds the 1st occurrence of the substring in the string haystack.
* @haystack: Pointer to the string to be searched.
* @needle: Pointer to the substring to find.
*
* Return: Pointer to the beginning of the located substrin.
*/
char *_strstr(char *haystack, char *needle)
{
	char *h = haystack;
	char *n = needle;

	if (*needle == '\0')
		return (haystack);

	while (*haystack != '\0')
	{
		h = haystack;
		n = needle;

		while (*n != '\0' && *h == *n)
		{
			h++;
			n++;
		}

		if (*n == '\0')
			return (haystack);

		haystack++;
	}

	return (NULL);
}

