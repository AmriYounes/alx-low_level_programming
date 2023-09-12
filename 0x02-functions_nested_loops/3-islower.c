#include "main.h"

/**
 * is_lower - Checks if a character code represents a lowercase letter in ASCII
 * @c: The character code to check
 *
 * Return: 1 if it's a lowercase letter, 0 otherwise
 */

int is_lower(int c)
{
    return (c >= 97 && c <= 122) ? 1 : 0;
}
