#include <stddef.h>
#include "sort.h"

void _swap_(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void selection_sort(int *array, size_t size)
{
	size_t i,j;

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
