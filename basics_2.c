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

/**
 * check_line - checks for empty line
 * @line: string given
 *
 * Return: int
 */
int check_line(char *line)
{
	int i = 0, j = 0;
	char check[] = " \n\t\b\a";

	if (line[0] == '#')
		return (1);
	while (line[i])
	{
		j = 0;
		while (check[j])
		{
			if (line[i] == check[j])
			{
				break;
			}
			j++;
		}
		if (check[j] == '\0')
			return (0);
		i++;
	}
	return (1);
}
