#include "monty.h"

/**
 * f_sub - subtracts the top element of the stack
 * from the second top element of the stack
 * @head: head of the stack
 * @counter: line count
 */
void f_sub(stack_t **head, unsigned int counter)
{
	stack_t *temp;
	int sub, node;

	temp = *head;
	for (node = 0; temp != NULL; node++)
		temp = temp->next;
	if (node < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	temp = *head;
	sub = temp->next->n - temp->n;
	temp->next->n = sub;
	*head = temp->next;
	free(temp);
}
