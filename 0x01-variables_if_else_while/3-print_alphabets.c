#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Use `putchar` to print lowercase and then uppercase alphabet.
 *
 * Return: Always 0 (indicating successful execution)
 */
int main(void)
{
        char c = 'a';

        for (; c <= 'z'; c++)
                putchar(c);

        c = 'A';

        for (; c <= 'Z'; c++)
                putchar(c);

        putchar('\n');
        return (0);
}
