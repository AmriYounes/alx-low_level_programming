#include "main.h"

/**
 * print_last_digit - Prints the last digit of an integer
 * @x: The integer from which to extract and print the last digit
 *
 * Return: The last digit of the integer
 */

int print_last_digit(int x)
{
	int y;

	if (x >= 0)
	{
		y = x % 10;
		_putchar(y + '0');
		return (y);
	}
	else
	{
		y =  -1 * (x % 10);
		_putchar(y + '0');
		return (y);
	}
}
