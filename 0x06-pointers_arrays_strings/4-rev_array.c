#include "main.h"

/**
 * reverse_array - Reverses the contents of an array
 * @a: Array of integers to be reversed
 * @n: Number of elements in the array.
 */
void reverse_array(int *a, int n)
{

	int tmp, index;

	for (index = n - 1; index >= n / 2; index--)
	{
	tmp = a[n - 1 - index];
	a[n - 1 - index] = a[index];
	a[index] = tmp;
	}
}
