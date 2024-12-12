#include <stddef.h>
#include "sort.h"

/**
 * _swap - Entry point
 * @a: pointer
 * @b: pointer
 * Desc: swap
 * Return: nothing
 */

void _swap(int *a, int *b)
{
	int temp = 0;

	temp = *a;

	*a = *b;

	*b = temp;
}

/**
 * bubble_sort - Entry point
 * @array: array
 * @size: size
 * Desc: bubble sort
 * Return: nothing
 */

void bubble_sort(int *array, size_t size)
{
	size_t j = 0;
	size_t i = 0;

	if (array == NULL || size < 2)
	{
		return;
	}

		while (j < size - 1)
		{
			i = 0;
			while (i < size - j)
			{
				if (array[i] > array[i + 1])
				{
					_swap(&array[i], &array[i + 1]);
					print_array(array, size);
				}
				i++;
			}
			j++;
		}
}
