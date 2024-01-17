#include "sort.h"
/**
 * insertion_sort_list - Creates a doubly linked list from an array of integers
 *
 * @array: Array to convert to a doubly linked list
 * @size: Size of the array
 *
 * Return: Pointer to the first element of the created list. NULL on failure
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current, *tmp;
	
	if (list == NULL || *list == NULL)
		return;
	
	current = (*list)->next;
	
	while (current)
	{
		tmp = current->next;
		while (current->prev && current->n < current->prev->n)
		{
			current->prev->next = current->next;
			if (current->next)
			{
				current->next->prev = current->prev;
			}
			current->next = current->prev;
			current->prev = current->prev->prev;
			current->next->prev = current;
			if (current->prev == NULL)
			{
				(*list) = current;	
			}
			else
			{
				current->prev->next = current;
			}
			print_list(*list);
		}
		current = tmp;
	}
}
