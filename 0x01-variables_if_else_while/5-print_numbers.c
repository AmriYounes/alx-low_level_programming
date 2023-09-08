#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Print all numbers of base 10, starting from 0.
 *
 * Return: Always 0 (indicating successful execution)
 */

int main(void)
{
        int x = 0;

        for (; x < 10; x++)
                printf("%d", x);

        printf("\n");
        return (0);
}
