#include "monty.h"

/**
 * f_swap - the function swaps the top two elements of the stack
 * @head: the stack head
 * @counter: the line_number
 * Return: no return
 */
void f_swap(stack_t **head, unsigned int counter)
{
	int aux;

	if (!(*head) || !(*head)->next)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}

	aux = (*head)->n;
	(*head)->n = (*head)->next->n;
	(*head)->next->n = aux;
}
