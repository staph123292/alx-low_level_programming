#include "lists.h"

/**
 * add_nodeint - adds new node at the beginning of a listint_list
 * @head: pointer to the first node in the list
 * @n: data to insert i that new node
 * Return: pointer to the new node, or NULL if if fails
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
