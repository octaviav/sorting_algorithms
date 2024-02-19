#include "sort.h"

/**
 * int_swap - Swaps two integers in an array.
 * @x: First integer to swap.
 * @y: Second integer to swap.
 */
void swap_ints(int *x, int *y)
{
	int tmp;

	tmp = *x;
	*x = *y;
	*y = tmp;
}

/**
 * bubble_sort - Sort an array of integers in ascending order.
 * @array: Array of integers to sort.
 * @size: Actual size of the array.
 *
 * Description: Prints array after each swap.
 */
void bubble_sort(int *array, size_t size)
{
	bool bubbly = false;
	size_t k, len = size;

	if (array == NULL || size < 2)
		return;

	while (bubbly == false)
	{
		bubbly = true;
		for (k = 0; k < len - 1; k++)
		{
			if (array[k] > array[k + 1])
			{
				swap_ints(array + k, array + k + 1);
				print_array(array, size);
				bubbly = false;
			}
		}
		len--;
	}
}
