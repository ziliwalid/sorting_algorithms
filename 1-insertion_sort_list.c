#include "sort.h"

/**
 * insertion_sort_list - insertion sorting algorithm
 * @list: pointer addr param
 * Return: void, nadaaaaaaa:)
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *i;
	listint_t *j;

	i = (*list)->next;
	if (!list || !*list || !(*list)->next)
	{
		return;
	}
	while (i)
	{
		j = i;
		i = i->next;
		while (j && j->prev)
		{
			if (j->prev->n > j->n)
			{
				swap(j->prev, j);
				if (!j->prev)
					*list = j;
				print_list((const listint_t *)*list);
			}
			else
				j = j->prev;
		}

	}
}


/**
 * swap - swaps 2 nums
 * @fn: first node param
 * @sn: second node param
 * Return: void, nadaaaaaa
 */
void swap(listint_t *fn, listint_t *sn)
{
	if (fn->prev)
		fn->prev->next = sn;
	if (sn->next)
		sn->next->prev = fn;
	fn->next = sn->next;
	sn->prev = fn->prev;
	fn->prev = sn;
	sn->next = fn;

}
