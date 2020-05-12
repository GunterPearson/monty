#include "monty.h"

/**
 * strk - Parses a string by space
 * @string: String to parse
 *
 * Return: Returns tokens
 */

char **strk(char *string)
{
	char *copy;
	char *tokens[2];
	int i = 0;
	char *token;

	strcpy(copy, string);
	token = strtok(copy, " ");
	while (token != NULL && i < 2)
	{
		tokens[i] = malloc(strlen(token) * sizeof(char));
		tokens[i] = token;
		token = strtok(NULL, " ");
		i++;
	}
	return(tokens);
}
