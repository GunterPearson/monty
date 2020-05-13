#include "monty.h"

/**
 * readline - Read a file line by line
 * @fd: File descriptor
 * Return: 0 on sucess
 */

int readline(FILE *fd)
{
	int num = 0, i = 0;
	stack_t *stack = NULL;
	ssize_t rd;
	size_t size = 0;
	char *line, **tokens;
	unsigned int line_num = 0;
	void (*function)(stack_t**, unsigned int);

	while ((rd = getline(&line, &size, fd)) != EOF)
	{
		line_num++;
		tokens = strk(line);
		i = 0;
		while (tokens[i])
		{
			printf("tokens[%d] is: %s\n", i, tokens[i]);
			i++;
		}
		/*if (tokens == NULL)
		{
			write(2, "L", 1);
			write(2, line_num, 4);
			write(2, ": unknown instruction NULL", 22);
			return (EXIT_FAILURE);
		}
		function = check_opcode(tokens[0]);
		if (function != NULL);
			printf("success\n");
		if (line != NULL)
			free_line(line);*/
	}
	return (0);
}
