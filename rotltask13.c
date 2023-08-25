#include "monty.h"

/**
 * f_rotl - this function rotates the stack to the very top
 * @head: The stack head
 * @counter: The line_number (unused)
 * Return: No return
 */
void f_rotl(stack_t **head,  __attribute__((unused)) unsigned int counter)
{
	stack_t *tmp = *head;

	if (!(*head) || !(*head)->next)
	{
		return;
	}

	while (tmp->next)
	{
		tmp= tmp->next;
	}

	{
		tmp = tmp->next;
	}

	 tmp->next = *head;
	 (*head)->prev = tmp;
	 (*head) = (*head)->next;
	 (*head)->prev = NULL;
	 tmp->next->next = NULL;
}
