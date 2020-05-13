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

    printf("PUSH_NODE\n");
/*
	newnode = malloc(sizeof(char) * strlen(line));
	if (newnode == NULL)
	{
		write(2, "Error: malloc failed\n", 21);
		exit(EXIT_FAILURE);
	}
	if (*head == NULL)
	{

	}
    */
}

/**
 * print_node - prints out list
 * @head: Head of the list
 * @line_num: line number of command
 * Return: void
 */
void print_node(stack_t **head, unsigned int line_num)
{
    printf("PRINT_NODE");
}