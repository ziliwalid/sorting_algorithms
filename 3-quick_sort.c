#include "sort.h"

/**
 * swap - does some swapping
 * @arr: array param
 * @s:  size param
 * @fv: first value param
 * @sv: second value param
 *Return: void, nada
 */
void swap(int *arr, size_t s, int *fv, int *sv)
{
	if (*fv != *sv)
	{
		*fv = *fv + *sv;
		*sv = *fv - *sv;
		*fv = *fv - *sv;
		print_array((const int *)arr, s);
	}
}

/**
 * lomuto - breaks down the array
 * @arr: int array param
 * @s: size of array param
 * @lowI: low index param
 * @highI: high index param
 * Return: void, ndad
 */
size_t lomuto(int *arr, size_t s, ssize_t lowI, ssize_t highI)
{
	int i, j;
	int p = arr[highI];

	for (i = j = lowI; j < highI; j++)
		if (arr[j] < p)
			swap(arr, s, &arr[j], &arr[i++]);
	swap(arr, s, &arr[i], &arr[highI]);

	return (i);
}

/**
 * sorter - quicksorts via Lomuto partitioning scheme
 * @arr: int array param
 * @s: size of array param
 * @lowI: low index param
 * @highI: high index param
 * Return: void, ndad
 */
void sorter(int *arr, size_t s, ssize_t lowI, ssize_t highI)
{
	if (lowI < highI)
	{
		size_t p = lomuto(array, size, lowI, highI);

		sorter(array, size, lowI, p - 1);
		sorter(array, size, p + 1, highI);
	}
}

/*******************/

/**
 * quick_sort - calls sorter method
 * @array: array pram
 * @size: size param
 * Return: void, nadaaaaaaaaaaaaaaa :)
 */
void quick_sort(int *array, size_t size)
{
	if (!array || !size)
		return;
	sorter(array, size, 0, size - 1);
}



