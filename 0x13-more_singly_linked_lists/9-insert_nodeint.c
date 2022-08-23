#include "lists.h"
/**
 * insert_nodeint_at_index - Inserts a new node to a list at a given pos.
 * @head: A pointer to the address of the head
 * @idx: The index of the list where the node is to be added.
 * @n: The integer for the new node to contain.
 * Return: If the function fails - NULL.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *copy = *head;
	unsigned int node;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	if (idx == 0)
	{
		new->next = copy;
		*head = new;
		return (new);
	}

	for (node = 0; node < (idx - 1); node++)
	{
		if (copy == NULL || copy->next == NULL)
			return (NULL);

		copy = copy->next;
	}

	new->next = copy->next;
	copy->next = new;

	return (new);
}
