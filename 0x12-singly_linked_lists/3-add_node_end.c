#include "lists.h"
int _strlen(const char *);
/**
 * add_node_end - adds a new node at the end
 * @head: head of the list
 * @str: string to print
 * Return: a new node at the end of a list_t list
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new = NULL, *tail;

	new = malloc(sizeof(list_t));

	if (new != NULL)
	{
		new->str = strdup(str);
		new->len = _strlen(str);
	}
	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}
	tail = *head;
	while (tail->next != NULL)
	{
		tail = tail->next;
	}
	tail->next = new;
	return (*head);
}

/**
 * _strlen - length of string
 * @s: pointer to string
 * Return: the length of the string
 */
int _strlen(const char *s)
{
	int i;

	for (i = 0; s[i] != 0; i++)
	{
	}
	return (i);
}
