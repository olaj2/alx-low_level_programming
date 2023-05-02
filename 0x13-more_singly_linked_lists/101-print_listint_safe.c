#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - Counts the number of distinct nodes
 * in a looped listint_t linked list.
 * @head: The pointer to the head of the listint_t to be checked.
 *
 * Return: If the list is not looped - 0.
 * Otherwise - the number of distinct nodes
 */

size_t looped_listint_len(const listint_t *head)
{
	const listint_t *ruler, *marker;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
	return (0);
		ruler = head->next;
		marker = (head->next)->next;
	while (marker)
	{
	if (ruler == marker)
	{
		ruler = head;
	while (ruler != marker)
	{
		nodes++;
		ruler = ruler->next;
		marker = marker->next;
	}
		ruler = ruler->next;
	while (ruler != marker)
	{
		nodes++;
		ruler = ruler->next;
	}
	return (nodes);
	}
		ruler = ruler->next;
		marker = (marker->next)->next;
	}
	return (0);
}

/**
 * print_listint_safe - function that prints a listint_t linked list.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: The number of nodes in the list.
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, i = 0;

		nodes = looped_listint_len(head);
	if (nodes == 0)
	{
	for (; head != NULL; nodes++)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
	}
	else
	{
	for (i = 0; i < nodes; i++)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
		printf("-> [%p] %d\n", (void *)head, head->n);
	}
	return (nodes);
}
