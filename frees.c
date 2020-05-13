#include "monty.h"

void free_tokens()
{
	int i = 1;

   while (i >= 0)
	{
		free(tokens[i]);
		i--;
	}
	free(tokens);
}


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
