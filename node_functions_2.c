#include "monty.h"

/**
 * swap_top - swaps top 2 nodes
 * @head: head of linked list
 * @line_number: line number we are on
 *
 * Return: void
 */
void swap_top(stack_t **head, unsigned int line_number)
{
	stack_t *temp;
	stack_t *new;
	(void)line_number;

	temp = *head;
	new = temp->next;
	temp->prev = new;
	temp->next = new->next;
	new->next = temp;
	new->prev = NULL;
	*head = new;
}

/**
 * add_top - swaps top 2 nodes
 * @head: head of linked list
 * @line_number: line number we are on
 *
 * Return: void
 */
void add_top(stack_t **head, unsigned int line_number)
{
	stack_t *temp;
	stack_t *new;
	int i = 0;
	(void)line_number;

	temp = *head;
	i = temp->n;
	new = temp->next;
	i += new->n;
	new->prev = NULL;
	new->n = i;
	*head = new;
	free(temp);
}

/**
 * sub_top - swaps top 2 nodes
 * @head: head of linked list
 * @line_number: line number we are on
 *
 * Return: void
 */
void sub_top(stack_t **head, unsigned int line_number)
{
	stack_t *temp;
	stack_t *new;
	int i = 0;
	(void)line_number;

	temp = *head;
	i = temp->n;
	new = temp->next;
	i -= new->n;
	i *= -1;
	new->prev = NULL;
	new->n = i;
	*head = new;
	free(temp);
}

/**
 * div_top - swaps top 2 nodes
 * @head: head of linked list
 * @line_number: line number we are on
 *
 * Return: void
 */
void div_top(stack_t **head, unsigned int line_number)
{
	stack_t *temp;
	stack_t *new;
	int i = 0;
	(void)line_number;

	temp = *head;
	i = temp->next->n;
	new = temp->next;
	i /= temp->n;
	new->prev = NULL;
	new->n = i;
	*head = new;
	free(temp);
}
