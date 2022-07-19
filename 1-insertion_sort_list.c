#include "sort.h"

/**
 * swap_nodes - Swaps two nodes
 * @prv: Pointer to address of first node
 * @mxt: Pointer to address of next node
 * @list: list of numbers
 * Return: void
 */
void swap_nodes(listint_t **list, listint_t **prv, listint_t **nxt)
{
	listint_t *tmp = (*prv)->prev;

	(*prv)->next = (*nxt)->next;

	if ((*nxt)->next != NULL)
		(*nxt)->next->prev = *prv;

	(*prv)->prev = *nxt;
	(*nxt)->next = *prv;
	(*nxt)->prev = tmp;

	if ((*nxt)->prev != NULL)
		(*nxt)->prev->next = *nxt;
	else
		*list = *nxt;
}

/**
 * insertion_sort_list - Sorts a list using Insertion Sort algorithm
 * @list: list to be sorted
 * Return: void
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *actual = NULL, *key = NULL;

	if (!list || !(*list))
		return;

	for (actual = *list; actual != NULL; actual = actual->next)
	{
		while (actual->next != NULL && actual->n > actual->next->n)
		{
			key = actual->next;
			while (key->prev != NULL && key->n < key->prev->n)
			{
				swap_nodes(list, &key->prev, &key);
				print_list(*list);
			}
		}
	}
}
