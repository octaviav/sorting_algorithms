#include "sort.h"

/**
 * int_swap - Swaps two integers in an array.
 * @x: First integer to swap.
 * @y: Second integer to swap.
 */
void ints(int *x, int *y)
{
	int tmp;

	tmp = *x;
	*x = *y;
	*y = tmp;
}

/**
 * shell_sort - Sorts an array of integers in ascending
 *              order using shell sort algorithm.
 * @array: Array of integers.
 * @size: Size of the array.
 *
 * Description: Uses the Knuth interval sequence.
 */
void shell_sort(int *array, size_t size)
{
	size_t a, b, c;

	if (array == NULL || size < 2)
		return;

	for (a = 1; a < (size / 3);)
		a = a * 3 + 1;

	for (; a >= 1; a /= 3)
	{
		for (b = a; b < size; b++)
		{
			c = b;
			while (c >= a && array[c - a] > array[c])
			{
			int_swap(array + c, array + (c - a));
				c -= a;
			}
		}
		print_array(array, size);
	}
}
