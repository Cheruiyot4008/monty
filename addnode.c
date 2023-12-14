#include "monty.h"

/**
 * addnode - Adds a node to the head of the stack
 * @head: Pointer to the head of the stack
 * @n: Value of the new node
 * Return: No return value
 */
void addnode(stack_t **head, int n)
{
    stack_t *new_node, *aux;

    aux = *head;
    new_node = malloc(sizeof(stack_t));
    if (new_node == NULL)
    {
        fprintf(stderr, "Error: Unable to allocate memory\n");
        exit(EXIT_FAILURE);
    }

    do
    {
        if (aux)
        {
            aux->prev = new_node;
        }

        new_node->n = n;
        new_node->next = *head;
        new_node->prev = NULL;
        *head = new_node;

    } while (0);
}
