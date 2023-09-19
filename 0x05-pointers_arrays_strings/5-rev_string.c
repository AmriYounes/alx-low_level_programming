/**
 * rev_string - Reverses a string in place.
 * @s: Pointer to the string.
 */
void rev_string(char *s)
{
	int length = 0;
	char *p = s;
	char *q = s;

	while (*p != '\0')
	{
		length++;
		p++;
	}

	p--;

	int i = 0;

	while (i < length / 2)
	{
		char c = *q;
		*q = *p;
		*p = c;
		p--;
		q++;
		i++;
	}
}

