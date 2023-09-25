#include "sort.h"
/**
 * bubble_sort - Sorts an array of integers using the Bubble Sort algorithm
 * @array: The array to be sorted
 * @size: The size of the array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	size_t temp_var;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp_var = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp_var;
				print_array(array, size);
			}
		}
	}
}
