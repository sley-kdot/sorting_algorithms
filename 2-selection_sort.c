#include "sort.h"
/**
 * selection_sort - Sorts an array of integers using the Selection Sort
 * algorithm
 * @array: The array to be sorted
 * @size: The size of the array
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, idx;
	int temp_var;

	for (i = 0; i < size - 1; i++)
	{
		idx = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[idx])
				idx = j;
		}
		if (idx != i)
		{
			temp_var = array[i];
			array[i] = array[idx];
			array[idx] = temp_var;
			print_array(array, size);
		}
	}
}
