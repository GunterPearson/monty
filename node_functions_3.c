#include "monty.h"

/**
 * mod_top - swaps top 2 nodes
 * @head: head of linked list
 * @line_number: line number we are on
 *
 * Return: void
 */
void mod_top(stack_t **head, unsigned int line_number)
{
	stack_t *temp;
	stack_t *new;
	int i = 0;
	(void)line_number;

	temp = *head;
	i = temp->next->n;
	new = temp->next;
	i = i % temp->n;
	new->prev = NULL;
	new->n = i;
	*head = new;
	free(temp);
}

/**
 * print_char - Prints a char
 * @head: The stack
 * @line_number: Number of lines
 *
 * Return: void
 */

void print_char(stack_t **head, unsigned int line_number)
{
	int theint = (*head)->n;

	(void)line_number;
	printf("%c\n", theint);
}
