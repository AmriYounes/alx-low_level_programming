#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints the elements of an integer array.
 * @a: Pointer to the array.
 * @n: Number of elements in the array.
 */
void print_array(int *a, int n)
{
	if (n <= 0)
	{
		printf("\n");
		return;
	}

	int i;

	for (i = 0; i < n - 1; i++)
	{
		printf("%d, ", a[i]);
	}
	printf("%d\n", a[i]);
}

