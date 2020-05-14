#include "monty.h"

/**
* check_tokens - Checks tokens for empty or non int
* @fd: File
* @stack: The stack
* @line: The line
* @line_num: The linew number
* Return: 0 for success
*/

int check_tokens(FILE *fd, stack_t *stack, char *line, unsigned int line_num)
{
	int i = 0;
	char *temp = tokens[1];
	char *push = "push";

	if (strcmp(tokens[0], push))
		return (0);
	while (temp[i] != '\0')
	{
		if (temp[i] == '\n')
			temp[i] = '\0';
		i++;
	}
	if (temp[0] == '\0')
	{
		free_stack(&stack);
		free_tokens();
		free(line);
		fclose(fd);
		fprintf(stderr, "L%u: usage: push integer\n", line_num);
		exit(EXIT_FAILURE);
	}
	if (is_int() == 1)
	{
		free_stack(&stack);
		free_tokens();
		free(line);
		fclose(fd);
		fprintf(stderr, "L%u: usage: push integer\n", line_num);
		exit(EXIT_FAILURE);
	}
	return (0);
}

/**
* is_int - Checks if integer
* Return: 1 for no, 0 for yes
*/

int is_int(void)
{
	int i = 0;
	char *temp = tokens[1];

	while (temp[i] != '\0')
	{
		if (!(isdigit(temp[i])) && temp[i] != '-')
			return (1);
		i++;
	}
	return (0);
}

/**
* head_null - Checks if the stack is empty
* @fd: File
* @line: Line
* @stack: Stack
* @line_number: The line number
* Return: 0 for good
*/

int head_null(FILE *fd, char *line, stack_t *stack, unsigned int line_number)
{
	char *pint = "pint";

	if (strcmp(tokens[0], pint) != 0)
		return(0);
	if (stack == NULL)
	{
		free_tokens();
		free(line);
		fclose(fd);
		fprintf(stderr, "L%u: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	return (0);
}
