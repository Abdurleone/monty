#include "monty.h"
/**
 * f_pop - the function prints the top
 * @head: the stack head
 * @counter: the line_number
 * Return: no return
*/
void f_pop(stack_t **head, unsigned int counter)
{
	stack_t *h = *head;

	if (!h)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}

	*head = h->next;
	free(h);
}
