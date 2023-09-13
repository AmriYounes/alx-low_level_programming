#include "main.h"

/**
* _islower - checks if a character is lowercase
* @c: The character to be checked
* Description: checks if the input is a lowercase letter.
* Return: 1 if 'c' is lowercase, 0 otherwise.
*/

int _islower(int c)
{
return ((c >= 97 && c <= 122) ? 1 : 0);
}
