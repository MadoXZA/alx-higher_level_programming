#include "lists.h"

/**
 * insert_node - Inserts a number into a sorted singly-linked list.
 * @head: pointer the head of the linked list.
 * @number: number to insert.
 *
 * Return: If the function fails - NULL.
 * Otherwise - pointer to new node.
 */
listint_t *insert_node(listint_t **head, int number)
{
	listint_t *node = *head, *nuut;

	nuut = malloc(sizeof(listint_t));
	if (nuut == NULL)
		return (NULL);
	nuut->n = number;

	if (node == NULL || node->n >= number)
	{
		nuut->next = node;
		*head = nuut;
		return (nuut);
	}

	while (node && node->next && node->next->n < number)
		node = node->next;

	nuut->next = node->next;
	node->next = nuut;

	return (nuut);
