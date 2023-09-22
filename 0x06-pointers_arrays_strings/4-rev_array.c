#include "main.h"

/**
 * reverse_array - Reverses the elements in an integer array.
 * @a: Pointer to the array.
 * @n: Number of elements in the array.
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int c;

	while (i < n / 2)
	{
		c = *(a + i);
		*(a + i) = *(a + (n - 1 - i));
		*(a + (n - 1 - i)) = c;
		i++;
	}
}

