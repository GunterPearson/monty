#include "monty.h"

/**
 * push_node - Adding a node to struct
 * @head: Head of the list
 * @line_num: Line number of command
 * Return: Return the head with new node
 */

void push_node(stack_t **head, unsigned int line_num)
{
	stack_t *newnode;
	stack_t *headsave = *head;

	newnode = malloc(sizeof(stack_t));
	if (newnode == NULL)
	{
		write(2, "Error: malloc failed\n", 21);
		exit(EXIT_FAILURE);
	}
	newnode->n = strtonum(tokens[1]);
	if (*head == NULL)
	{
		newnode->next = NULL;
		newnode->prev = NULL;
		*head = newnode;
		return;
	}
	newnode->prev = NULL;
	newnode->next = *head;
	*head = newnode;
}

/**
 * print_node - prints out list
 * @head: Head of the list
 * @line_num: line number of command
 * Return: void
 */
void print_node(stack_t **head, unsigned int line_num)
{
	stack_t *temp = *head;

	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}
}
