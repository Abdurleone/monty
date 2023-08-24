#include "monty.h"

/**
 * f_add - the function that adds the top two elements of the stack
 * @head: the stack head
 * @counter: the line_number
 * Return: no return
 */
void f_add(stack_t **head, unsigned int counter)
{
    stack_t *temp;

    if (*head == NULL || (*head)->next == NULL)
    {
        fprintf(stderr, "L%d: can't add, stack too short\n", counter);
        fclose(bus.file);
        free(bus.content);
        free_stack(*head);
        exit(EXIT_FAILURE);
    }

    temp = *head;
    (*head)->next->n += (*head)->n;
    *head = (*head)->next;
    (*head)->prev = NULL;
    free(temp);
}
