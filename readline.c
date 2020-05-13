#include "monty.h"

/**
 * readline - Read a file line by line
 * @fd: File descriptor
 * Return: 0 on sucess
 */

int readline(FILE *fd)
{
	stack_t *stack = NULL;
	ssize_t rd;
	size_t size = 0;
	char *line = NULL;
	unsigned int line_num = 0;
	void (*function)(stack_t**, unsigned int);

	while ((rd = getline(&line, &size, fd)) != EOF)
	{
		if (rd == -1)
			break;
		line_num++;
		tokens = strk(line);
		if (tokens != NULL)
		{
			function = check_opcode(tokens[0]);
			if (function == NULL)
			{
				fprintf(stderr, "L%d: unknown instruction %s\n", line_num, tokens[0]);
				free_tokens();
				free(line);
				free_stack(&stack);
				fclose(fd);
				exit(EXIT_FAILURE);
			}
			function(&stack, line_num);
			free_tokens();
		}
	}
	free(line);
	free_stack(&stack);
	return (0);
}
