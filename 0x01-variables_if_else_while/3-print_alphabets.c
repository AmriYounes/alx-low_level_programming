#include <stdio.h>

/**
 * main - main block
 * Description: Use `putchar` to print lowercase and then uppercase alphabet.
 * Return: 0
 */

int main(void)
{
	char c ='a';	
    for (;c <= 'z';c++)
		putchar(c);
	c = 'A';
    for (;c <= 'Z';c++)
		putchar(c);

	putchar('\n');
	return (0);
}
