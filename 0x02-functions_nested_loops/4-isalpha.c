#include "main.h"

/**
 * _isalpha - Checks if a char represents a letter (lowercase or uppercase)
 * @c: The character code to check
 * Return: 1 if it's a letter, 0 otherwise
 */

int _isalpha(int c)
{
return (((c >= 97 && c <= 122) || (c >= 65 && c <= 90)) ? 1 : 0);
}
