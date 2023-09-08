#include <stdio.h>

/**
 * main - prints the alphabet in lowercase,
 * followed by a new line, except q and e
 * Return: Aways 0 (Sucess)
 */

int main(void)
{
	char c = 'a';

	for (; c <= 'z'; c++)
		if (c != 'e' && c != 'q')
			putchar(c);

	putchar('\n');
	return (0);
}
