#include "monty.h"

/**
 * add_opcode - Adds an opcode
 * @stack: The curretn stack
 * @opcode: Code to use
 * @line_number: The line of the file
 * Return: Head of the list
 */

int add_opcode(char **stack, char *opcode, unsigned int line_number)
{
	instruct_t *op[] = {
		{"push", push(stack, line_number)}
	}
	stringtok;
}
