#include "monty.h"

/**
 * f_pall - function that prints the stack
 * @head: the stack head
 * @counter: not used
 * Return: no return
 */
void f_pall(stack_t **head, unsigned int counter)
{
	stack_t *h = *head;
	(void)counter;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}
