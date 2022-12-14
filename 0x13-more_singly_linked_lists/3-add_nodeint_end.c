#include "lists.h"
/**
 * *add_nodeint_end - adds a new node at the end of a listint_t
 * list
 * @head: head of the list
 * @n: integer
 * Return: new node at the end of listint_t list
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = NULL, *tail;

	new = malloc(sizeof(listint_t));

	if (new != NULL)
	{
		new->n = n;
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
