#include "lists.h"
/**
 * pop_listint - delete the head node
 * @head: head node
 *
 * Description: deletes the head node of listint_t linked list
 * Return: head node's data (n)
 */
int pop_listint(listint_t **head)
{
	listint_t *deleteNode;
	int n;

	if (head == NULL)
		return (0);

	deleteNode = *head;
	*head = (*head)->next;
	n = deleteNode->n;
	free(deleteNode);

	return (n);
}
