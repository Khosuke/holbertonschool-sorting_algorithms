#include "sort.h"

/**
 * _swap_ - swap two integers
 * @a: first element
 * @b: second element
 *
 * Return: no return
 */
void _swap_(int *a, int *b)
{
	int temp;

	if (*a != *b)
	{
		temp = *a;
		*a = *b;
		*b = temp;
	}
}

/**
 * partition - get the index of the pivot to split the array
 * @array: the array to split using a pivot
 * @low: the start of the array
 * @high: the end of the array
 * @size: size of the array
 *
 * Return: the pivot index
 */
int partition(int *array, int low, int high, size_t size)
{
	int pivot = array[high];
	int i = low - 1, tmp = low;

	while (tmp < high)
	{
		if (array[tmp] <= pivot)
		{
			i++;
			_swap_(&array[i], &array[tmp]);
			if (array[i] != array[tmp])
				print_array(array, size);
		}
		tmp++;
	}
	_swap_(&array[i + 1], &array[high]);
	if (array[i + 1] != array[high])
		print_array(array, size);
	return (i + 1);
}

/**
 * recursive_quicksort - split the array into two
 * @array: the array to split
 * @low: the start of the array
 * @high: the end of the array
 * @size: size of the array
 *
 * Return: no return
 */
void recursive_quicksort(int *array, int low, int high, size_t size)
{
	size_t split;

	if (low >= high || low < 0)
		return;
	split = partition(array, low, high, size);
	if (split > 0)
	{
		recursive_quicksort(array, low, split - 1, size);
	}
	recursive_quicksort(array, split + 1, high, size);
}


/**
 * quick_sort - sorts an array of integers in ascending
 * order using the Quick sort algorithm
 * @array: the array to sort
 * @size: size of the array
 *
 * Return: no return
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;

	recursive_quicksort(array, 0, size - 1, size);
}
