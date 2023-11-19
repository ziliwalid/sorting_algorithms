#include "sort.h"

/**
 *selection_sort- defines selection sort alg
 *@array: array param
 *@size: size param
 *Return: void, nada as always
 */
void selection_sort(int *array, size_t size)
{
	int tmp;
	size_t x, i, j;

	if (!array || !size)
	{
		return;
	}
	for (i = 0; i < size - 1; i++)
	{
		for (j = size - 1, x = i + 1; j > i; j--)
		{
			if (array[j] < array[x])
			{
				x = j;
			}
		}
		if (array[i] > array[x])
		{
			tmp = array[i];
			array[i] = array[x];
			array[x] = tmp;
			print_array(array, size);
		}
	}
}


