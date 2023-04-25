#include "sort.h"
/**
 * partition - function of an array
 * @array: Sorted array
 * @l_index: lower index of array
 * @h_index: higher index array
 * @size: size of array
 * Return: none
*/
int partition(int *array, int l_index, int h_index, size_t size)
{
	int i, j, pivot_element, temp;

	pivot_element = array[h_index];
	i = (l_index - 1);
	for (j = l_index; j < _index; j++)
	{
		if (array[j] <= pivot_element)
		{
			i++;
			if (i != j)
			{
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
				print_array(array, size);
			}
		}
	}
	if (pivot_element < array[i + 1])
	{
		temp = array[i + 1];
		array[i + 1] = array[high_index];
		array[high_index] = temp;
		print_array(array, size);
	}
	return (i + 1);
}
/**
 * quickSort - function that sort an array
 * @array: array to sort
 * @l_index: lower index of array
 * @h_index: higher index of array
 * @size: size of array
 * Return: none
*/
void quickSort(int *array, int l_index, int h_index, size_t size)
{
	int pivot;

	if (l_index < h_index)
	{
		pivot = partition(array, l_index, h_index, size);
		quickSort(array, l_index, pivot - 1, size);
		quickSort(array, pivot + 1, h_index, size);
	}
}
/**
 * quick_sort - Function that parse an array
 * @array: Sorted array
 * @size: size of array
 * Return: none
*/
void quick_sort(int *array, size_t size)
{
	int low_index, high_index;

	low_index = 0;
	high_index = size - 1;
	if (size < 2 || array == NULL)
		return;
	quickSort(array, low_index, high_index, size);
}
