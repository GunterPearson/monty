#include "monty.h"

/**
 * head_null_4 - The Fourth head null
 * @fd: File
 * @line: The line
 * @stack: The stack
 * @line_num: The line number
 * Return: 0 for good
 */

int head_null_4(FILE *fd, char *line, stack_t **stack, unsigned int line_num)
{
	char *pchar = "pchar";

	if (strcmp(pchar, tokens[0]) != 0)
		return (0);
	if (*stack == NULL)
	{
		fclose(fd);
		free(line);
		free_tokens();
		fprintf(stderr, "L%u: can't pchar, stack empty\n", line_num);
		exit(EXIT_FAILURE);
	}
	if ((*stack)->n < 0 || (*stack)->n > 127)
	{
		fclose(fd);
		free_tokens();
		free(line);
		free_stack(stack);
		fprintf(stderr, "L%u: can't pchar, value out of range\n", line_num);
		exit(EXIT_FAILURE);
	}
	return (0);
}
