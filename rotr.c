#include "monty.h"

/**
 * f_rotr - Rotates the stack to the bottom.
 * @head: Stack head
 * @counter: Line number
 * Return: No return
 */
void f_rotr(stack_t **head, __attribute__((unused)) unsigned int counter)
{
    stack_t *copy;

    copy = *head;

    if (*head == NULL || (*head)->next == NULL)
    {
        return;
    }

    do
    {
        copy = copy->next;
    } while (copy->next);

    copy->next = *head;
    copy->prev->next = NULL;
    copy->prev = NULL;
    (*head)->prev = copy;
    (*head) = copy;
}
