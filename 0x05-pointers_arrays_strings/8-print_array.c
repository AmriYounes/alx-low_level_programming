#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints the elements of an integer array.
 * @a: Pointer to the array.
 * @n: Number of elements in the array.
*/
void print_array(int *a, int n)
{
	int i;

	if (n <= 0)
	{
		printf("\n");
		return;
	}

	for (i = 0; i < n ; i++)
	{
		if (i == n - 1)
			printf("%d\n", a[i]);
	}
	printf("%d, ", a[i]);
}
