#include "monty.h"

/**
 * strtonum - converts string to int
 * @token: string to convert
 *
 * Return: int
 */

int strtonum(char *token)
{
int i = 0;
	while (token[i])
	{
		if (token[i] == '\n')
			token[i] = '\0';
		i++;
	}
	i = atoi(token);
	return (i);
}
