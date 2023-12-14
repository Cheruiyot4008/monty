#include "monty.h"

/**
 * f_push - add node to the stack
 * @head: head of the stack
 * @counter: number line
 * Return: does not return anything
 */
void f_push(stack_t **head, unsigned int counter)
{
        int q, m = 0, flag = 0;

        if (bus.arg)
        {
                if (bus.arg[0] == '-')
                        m++;
                q = m;
                do {
                        if (bus.arg[q] > 57 || bus.arg[q] < 48)
                                flag = 1;
                        q++;
                } while (bus.arg[q] != '\0');
                if (flag == 1)
                {
                        fprintf(stderr, "L%d: usage: push integer\n", counter);
                        fclose(bus.file);
                        free(bus.content);
                        free_stack(*head);
                        exit(EXIT_FAILURE);
                }
        }
        else
        {
                fprintf(stderr, "L%d: usage: push integer\n", counter);
                fclose(bus.file);
                free(bus.content);
                free_stack(*head);
                exit(EXIT_FAILURE);
        }
        q = atoi(bus.arg);
        if (bus.lifi == 0)
                addnode(head, q);
        else
                addqueue(head, q);
}
