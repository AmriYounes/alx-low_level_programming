#include "main.h"

/**
 * jack_bauer - Prints every minute of a day in 24-hour format
 */

void jack_bauer(void)
{
int x = 0;
int y = 0;

for (x = 0; x < 24; x++)
{
for (y = 0; y < 60; y++)
{
_putchar((x / 10) + '0');
_putchar((x % 10) + '0');
_putchar(':');
_putchar((y / 10) + '0');
_putchar((y % 10) + '0');
_putchar('\n');
}
}
}
