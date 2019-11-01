#include "lists.h"
/**
 * list_len - Entry Point
 * Description: Function that returns the number of elements in a linked list
 * @h: Parametre to check
 * Return: number of nodes
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *t;
	unsigned int i = 0;

	t = malloc(sizeof(list_t));
	t->str = strdup(str);
	if (t == NULL)
	{
		free(t);
		return (NULL);
	}
	while (str[i] != '\0')
	{
		i++;
	}
	t->next = *head;
	t->len = i;
	*head = t;
	return (t);
}
