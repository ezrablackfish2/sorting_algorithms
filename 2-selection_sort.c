#include "sort.h"

/**
 * selection_sort - selects and sorts using selection sort algorithm
 * @array: the array to bes sorted using an old technique
 * @size_t: the size of an array
 */

void selection_sort(int *array, size_t size)
{
	size_t i = 0;
	size_t j = 0;
	int temp;

	for (i = 0; i < size; i++)
	{
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[i])
			{
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
		}
				print_array(array, size);
	}
}
