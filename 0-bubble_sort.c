#include "sort.h"
/**
 * bubble_sort - bubble sort function
 * @size: array size
 * @array: sort number arrary
 */
void bubble_sort(int *array, size_t size)
{
		int temp, check;
	size_t d;

	check = 1;
	if (array == NULL || size < 2)
		return;
	while (check != 0)
	{
		check = 0;
		for (d = 0; d < size - 1; d++)
			if (array[d] > array[d + 1])
			{
				temp = array[d];
				array[d] = array[d + 1];
				array[d + 1] = temp;
				check = 1;
				print_array(array, size);
			}
	}
}
