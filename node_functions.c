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
	(void)line_num;

	newnode = malloc(sizeof(stack_t));
	if (newnode == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	newnode->n = strtonum(tokens[1], line_num);
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
	(void)line_num;

	if (*head == NULL)
		return;
	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}
}

/**
* print_first - Prints the first node
* @head: Stack
* @line_number: Line number
* Return: void
*/

void print_first(stack_t **head, unsigned int line_number)
{
	(void)line_number;
	printf("%d\n", (*head)->n);
}

/**
* pop_stack - Pops the top of the stack
* @head: Head of the stack
* @line_number: The line number
* Return: Void
*/

void pop_stack(stack_t **head, unsigned int line_number)
{
	stack_t *temp;

	(void)line_number;
	temp = *head;
	*head = (*head)->next;
	if (*head == NULL)
		free(*head);
	else
		(*head)->prev = NULL;
	free(temp);
}

/**
* nop_nothing - Does Nothing!
* @stack: The stack
* @line_number: Line number
* Return: Void
*/

void nop_nothing(stack_t **stack, unsigned int line_number)
{
	(void)line_number;
	(void)*stack;
}
