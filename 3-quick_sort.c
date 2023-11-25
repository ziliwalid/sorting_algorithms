#include "sort.h"

/**
 * permutate - swaps ints in an array
 * @a: first int param
 * @b: secont int param
 * Return : Void, nadaaaaa
 */
void permutate(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}


/**
 * lomuto_partition - does some partioning 
 * @array: array of ints param
 * @size: length of array param(size)
 * @l: where it starts (left)
 * @r: wehre it ends (right)
 * Return: part indexing
 */
int lomuto_partition(int *array, size_t size, int l, int r)
{
	int *pivot;
    int  above, below;

	pivot = array + r;
	for (above = below = l; below < right; below++)
	{
		if (array[below] < *pivot)
		{
			if (above < below)
			{
				permutate(array + below, array + above);
				print_array(array, size);
			}
			above++;
		}
	}

	if (array[above] > *pivot)
	{
		permutate(array + above, pivot);
		print_array(array, size);
	}

	return (above);
}

/**
 * lomuto_sort - Implement the quicksort algorithm through recursion.
 * @array: array of ints param
 * @size: length of array param(size)
 * @l: where it starts (left)
 * @r: wehre it ends (right)
 * Return: part indexing
 */
void lomuto_sort(int *array, size_t size, int l, int r)
{
	int part;

	if (r - l > 0)
	{
		part = lomuto_partition(array, size, l, r);
		lomuto_sort(array, size, l, part - 1);
		lomuto_sort(array, size, part + 1, r);
	}
}

/***********************/
/**
 * quick_sort - sorts an array assendly
 * @array: arary of ints param
 * @size: length of array param(size)
 * Return: quick sorting magic :)
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;

	lomuto_sort(array, size, 0, size - 1);
}
