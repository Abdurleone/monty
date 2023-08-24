#include "monty.h"

/**
 * f_pall - function that prints the stack
 * @head: the stack head
 * @counter: not used
 * Return: no return
 */
void f_pall(stack_t **head, unsigned int counter)
{
    stack_t *current;

    (void)counter;

    current = *head;

    while (current != NULL)
    {
        printf("%d\n", current->n);
        current = current->next;
    }
}
