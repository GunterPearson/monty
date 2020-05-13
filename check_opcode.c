#include "monty.h"

int check_opcode(stack_t *stack, unsigned int line_num)
{
	int i = 0;
	char **tokens;
	char *temp = tokens[0];

	instruction_t command[] = {
		{"push", push_node},
		{"pall", print_node},
		{NULL, NULL}
	};

	while (command[i].opcode)
	{	
		if (strcmp(temp, command[i].opcode) == 0)
			command[i].f(&stack, line_num);
		i++;
	}

	return (0);
}
