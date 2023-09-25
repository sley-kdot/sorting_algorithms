#include "sort.h"
/**
 * insertion_sort_list - Sorts a list of integers using the Insertion
 * Sort algorithm
 * @list: The list to be sorted
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *prev = NULL, *temp = NULL;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	temp = (*list)->next;
	while (temp != NULL)
	{
		prev = temp->prev;
		while (prev != NULL && prev->n > temp->n)
		{
			prev->next = temp->next;
			if (temp->next != NULL)
				temp->next->prev = prev;

			temp->next = prev;
			temp->prev = prev->prev;
			prev->prev = temp;

			if (temp->prev != NULL)
				temp->prev->next = temp;
			else
				*list = temp;
			prev = temp->prev;
			print_list(*list);
		}
		temp = temp->next;
	}
}
