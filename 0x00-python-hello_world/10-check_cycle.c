#include "lists.h"

/**
 * check_cycle - checks linked list contains a cycle
 * @list: linked list to check
 *
 * Return: 1 if the list has a cycle, 0 if it doesn't
 */
int check_cycle(listint_t *list)
{
	listint_t *stadig = list;
	listint_t *vinnig = list;

	if (!list)
		return (0);

	while (stadig && vinnig && vinnig->next)
	{
		stadig = stadig->next;
		vinnig = vinnig->next->next;
		if (stadig == vinnig)
			return (1);
	}

	return (0);
}
