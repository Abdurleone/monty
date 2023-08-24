#include "monty.h"

/**
 * f_mod - the function computes remainder of division of second top element
 *         of the stack by the top element of the stack
 * @head: The stack head
 * @counter: The line_number
 * Return: No return
 */
void f_mod(stack_t **head, unsigned int counter)
{
	int divisor;

	if (!(*head) || !(*head)->next)
	{
		fprintf(stderr, "L%d: can't mod, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}

	divisor = (*head)->n;
	if (divisor == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}

	(*head)->next->n %= divisor;
	*head = (*head)->next;
}
