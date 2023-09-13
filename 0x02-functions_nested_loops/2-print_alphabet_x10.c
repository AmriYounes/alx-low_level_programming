#include "main.h"

/**
 * print_alphabet_x10 - Prints the lowercase alphabet 10X.
 */

void print_alphabet_x10(void)
{
int i, j;
char c;

for (i = 0; i < 10; i++)
{
for (c = 'a', j = 0; c <= 'z'; c++, j++)
{
_putchar(c);
}
_putchar('\n');
}
}
