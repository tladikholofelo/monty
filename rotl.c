#include "monty.h"

/**
 * f_rotl - rotates the stack to the top
 * @head: head of the stack
 * @counter: line count
 */
void f_rotl(stack_t **head,  __attribute__((unused)) unsigned int counter)
{
	stack_t *temp = *head, *acc;

	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}

	acc = (*head)->next;
	acc->prev = NULL;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = *head;
	(*head)->next = NULL;
	(*head)->prev = temp;
	(*head) = acc;
}
