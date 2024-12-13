#include "sort.h"

/**
 * insertion_sort_list - sorts a doubly linked list of integers in ascending order 
 * using the Insertion sort algorithm
 * @list: the list to sort
 *
 * @Return: no return
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current;
	listint_t *nextnode;

	if (list == NULL || (*list)->next == NULL)
		return;
	current = (*list)->next;
	while (current != NULL)
	{
		nextnode = current->next;
		while (current->prev != NULL && current->n < current->prev->n)
		{
				current->prev->next = current->next;
				if(current->next != NULL)
					current->next->prev = current->prev;
				current->next = current->prev;
				current->prev = current->next->prev;
				current->next->prev = current;

				if (current->prev == NULL)
					*list = current;
				else 
					current->prev->next = current;
				print_list(*list);
		}
		current = nextnode;
	}
}
