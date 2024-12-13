#include <stddef.h>
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

	temp = *a;
	*a = *b;
	*b = temp;
}

/**
 * selection_sort - sorts an array of integers in ascending
 * order using the Selection sort algorithm
 * @array: array to sort
 * @size: size of the array
 *
 * Return: no return
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j;

	i = 0;
	if (array == NULL || size < 2)
		return;

	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			if (array[i] < array[j])
			{
				_swap_(&array[i], &array[j]);
				print_array(array, size);
			}
			j++;
		}
		i++;
	}
}
