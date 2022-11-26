#include "lists.h"
int _strlen(const char *s);
/**
 * *add_node - adds a new node at the beginning of
 * a list_t list
 * @head: head of the list
 * @str: pointer to a string
 * Return: the address of the new element or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new = NULL;

	new = malloc(sizeof(list_t));
	if (new != NULL)
	{
		new->str = strdup(str);
		new->len = _strlen(str);
		new->next = *head;
		*head = new;
	}
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
