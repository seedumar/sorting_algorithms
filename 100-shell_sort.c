#include "sort.h"

/**
 * swap_int - Swap integers in an array.
 * @a: The first integer to swap.
 * @k: The second integer to swap.
 */
void swap_int(int *a, int *k)
{
	int tmp;

	tmp = *a;
	*a = *k;
	*k = tmp;
}

/**
 * shell_sort - Sorts an array of integers
 * @size: size of the array
 * @array: An array of ints
 */
void shell_sort(int *array, size_t size)
{
	size_t gap, i, j;

	if (array == NULL || size < 2)
		return;

	for (gap = 1; gap < (size / 3);)
		gap = gap * 3 + 1;

	for (; gap >= 1; gap /= 3)
	{
		for (i = gap; i < size; i++)
		{
			j = i;
			while (j >= gap && array[j - gap] > array[j])
			{
				swap_ints(array + j, array + (j - gap));
				j -= gap;
			}
		}
		print_array(array, size);
	}
}
