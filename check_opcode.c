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
		{NULL, NULL}
	};
	temp = clean_opcode(temp);
	while (command[i].opcode)
	{
		if (strcmp(temp, command[i].opcode) == 0)
			return (command[i].f);
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
	char *new = temp;
	char check[] = " \n\t\a\b";
	int i = 0, j = 0, k = 0;

	while (temp[i] != '\0')
	{
		j = 0;
		while (check[j])
		{
			if (temp[i] == check[j])
			{
				i++;
				continue;
			}
			j++;
		}
		new[k] = temp[i];
		k++;
		i++;
	}
	new[k] = '\0';
	return (new);
}
