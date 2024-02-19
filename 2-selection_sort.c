#include "sort.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * selection_sort - Sorts an array of ints in ascending order
 *                  using the selection sort algorithm.
 * @array: Array of integers.
 * @size: Size of the array.
 *
 * Description: Prints the array after each swap.
 */
void selection_sort(int *array, size_t size)
{
	int *a;
	size_t k, l;

	if (array == NULL || size < 2)
		return;

	for (k = 0; k < size - 1; k++)
	{
		a = array + k;
		for (l = k + 1; l < size; l++)
			a = (array[l] < *a) ? (array + k) : a;

		if ((array + k) != a)
		{
			int_swap(array + k, a);
			print_array(array, size);
		}
	}
}

#include "sort.h"

/**
 * int_swap - Swap two integers in an array.
 * @x: First integer to swap.
 * @y: Second integer to swap.
 */
void int_swap(int *x, int *y)
{
	int tmp;

	tmp = *x;
	*x = *y;
	*y = tmp;
}
