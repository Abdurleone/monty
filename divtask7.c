#include "monty.h"

/**
 * f_div - Divides the top element of the stack from the second top element
 * @head: The stack head
 * @counter: The line_number
 * Return: No return
 */
void f_div(stack_t **head, unsigned int counter)
{
	stack_t *h = *head;

	if (!h || !h->next)
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}

	if (h->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}

	h->next->n /= h->n;
	*head = h->next;
	free(h);
}
