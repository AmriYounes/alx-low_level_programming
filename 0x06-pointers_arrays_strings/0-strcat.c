/**
 * _strcat - Concatenates two strings.
 * @dest: Pointer to the destination string.
 * @src: Pointer to the source string.
 *
 * Return: Pointer to the destination string.
 */
char *_strcat(char *dest, char *src)
{
	char *d = dest;
	char *s = src;

	while (*d != '\0')
		d++;

	while (*s != '\0')
	{
		*d = *s;
		d++;
		s++;
	}

	*d = '\0';
	return (dest);
}

