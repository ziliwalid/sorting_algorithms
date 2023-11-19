#include "sort.h"
/**
 *bubble_sort - describes buble sorting algorithm
 *@array: array param
 *@size: size param
 */
void bubble_sort(int *array, size_t size)
{
	size_t i = 0;
	size_t x;
	int tmp;

	if (!array || !size)
	{
		return;
	}

	while (i < size)
	{
		for (x = 0; x < size - 1; x++)
		{
			if (array[x] > array[x + 1])
			{
				tmp = array[x];
				array[x] = array[x + 1];
				array[x + 1] = tmp;
				print_array(array, size);
			}
		}
		i++;
	}
}
