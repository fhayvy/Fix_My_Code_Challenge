#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    dlistint_t *head;

    head = NULL;
    add_dnodeint_end(&head, 0);
    add_dnodeint_end(&head, 1);
    add_dnodeint_end(&head, 2);
    add_dnodeint_end(&head, 3);
    add_dnodeint_end(&head, 4);
    add_dnodeint_end(&head, 98);
    add_dnodeint_end(&head, 402);
    add_dnodeint_end(&head, 1024);
    print_dlistint(head);
    printf("-----------------\n");

    // Delete node at index 5
    if (head != NULL)
    {
        if (delete_dnodeint_at_index(&head, 5) == -1)
        {
            printf("Failed to delete node at index 5: Index out of bounds\n");
        }
        else
        {
            print_dlistint(head);
            printf("-----------------\n");
        }
    }
    else
    {
        printf("List is empty. Cannot delete node at index 5\n");
    }

    // Delete node at index 0
    if (head != NULL)
    {
        if (delete_dnodeint_at_index(&head, 0) == -1)
        {
            printf("Failed to delete node at index 0: Index out of bounds\n");
        }
        else
        {
            print_dlistint(head);
            printf("-----------------\n");
        }
    }
    else
    {
        printf("List is empty. Cannot delete node at index 0\n");
    }

    // More deletion and print statements...

    free_dlistint(head);
    return (0);
}
