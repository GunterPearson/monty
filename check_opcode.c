#include "monty.h"

/**
 * check_opcode - checks command against struck
 * @opcode: string containing command
 *
 * Return: function pointer
 */
void (*check_opcode(char *opcode))(stack_t**, unsigned int)
{
	int i = 0;
	char *temp = opcode;

	instruction_t command[] = {
		{"push", push_node},
		{"pall\n", print_node},
		{NULL, NULL}
	};
	while (command[i].opcode)
	{
		if (strcmp(temp, command[i].opcode) == 0)
			return (command[i].f);
		i++;
	}
	return (NULL);
}
