#include "sort.h"
/**
 * selection_sort - Function to sort through an array
 *  * @array: Sorted array
 * @size: Array size
*/
void selection_sort(int *array, size_t size)
{
	size_t a, k, small, temp;

	if (size < 2 || array == NULL)
		return;
	for (a = 0; a < size - 1; a++)
	{
		small = a;
		for (k = a + 1; k< size; k++)
			if (array[k] < array[small])
				smallest = k;
		if (small != a)
		{
		temp = array[small];
		array[small] = array[a];
		array[a] = temp;
		print_array(array, size);
		}
	}
}
