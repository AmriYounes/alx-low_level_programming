#include "main.h"

/**
 * main - Entry point
 *
 * Description: Prints the string "_putchar" followed by a newline
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    char str[] = "_putchar";
    int i = 0;

    for (; str[i] != '\0'; i++)
       _putchar(str[i]);
   _putchar('\n');

   return (0);
}
