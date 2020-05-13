#include "monty.h"

/**
 * free_tokens - free all malloced tokens
 *
 * Return: void
 */
void free_tokens(void)
{
	int i = 1;

	while (i >= 0)
	{
		free(tokens[i]);
		i--;
	}
	free(tokens);
}

/**
 * free_stack - free linked list
 * @stack: linked list
 *
 * Return: void
 */
void free_stack(stack_t **stack)
{
	stack_t *last = *stack;

	while (*stack != NULL)
	{
		*stack = (*stack)->next;
		free(last);
		last = *stack;
	}
	free(*stack);
}
