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
		{"pall", print_node},
		{"pint", print_first},
		{"pop", pop_stack},
		{"nop", nop_nothing},
		{"swap", swap_top},
		{NULL, NULL}
	};
	temp = clean_opcode(temp);
	while (command[i].opcode)
	{
		if (strcmp(temp, command[i].opcode) == 0)
		{
			return (command[i].f);
		}
		i++;
	}
	return (NULL);
}

/**
 * clean_opcode - removes all seperators
 * @temp: src string
 *
 * Return: string
 */
char *clean_opcode(char *temp)
{
	int i = 0;

	while (temp[i] != '\0')
	{
		if (temp[i] == '\n')
			temp[i] = '\0';
		i++;
	}
	return (temp);
}
