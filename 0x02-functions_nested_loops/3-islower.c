#include "main.h"

/**
* _islower - checks if a character is lowercase
* @c: The character to be checked
*
* Description: This function checks if the input character 'c'
* is a lowercase letter.
*
* Return: 1 if 'c' is lowercase, 0 otherwise.
*/
int _islower(int c)
{
return ((c >= 97 && c <= 122) ? 1 : 0);
}
