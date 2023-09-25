#include "main.h"

/**
 * set_string - Sets the value of a pointer to a given string.
 * @s: Double pointer to be set.
 * @to: Pointer to the string to set.
 */
void set_string(char **s, char *to)
{
    *s = to;
}
