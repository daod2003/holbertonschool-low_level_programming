#include "lists.h"
/**
 * add_nodeint_end - entry point
 * @head: parametre to check
 * @n: parametre to check
 * Return: number of nodes
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *t, *copy;

	copy = *head;
	t = malloc(sizeof(listint_t));
	if (t == NULL)
	{
		free(t);
		return (NULL);
	}
	if (*head == NULL)
	{
		t->n = n;
		t->next = *head;
		*head = t;
	} else
	{
		while (copy->next != NULL)
			copy = copy->next;
		t->n = n;
		t->next = (copy)->next;
		(copy)->next = t;
	}
	return (*head);
}
