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
	int i = 0;
	static int j = 0;
	char *token, **tokens;

	strcpy(copy, string);
	token = strtok(copy, " ");
	tokens = malloc(2 * sizeof(char *));
	while (token != NULL && i < 2)
	{
		tokens[j] = malloc(sizeof(char) * strlen(token));
		tokens[j] = token;
		token = strtok(NULL, " ");
		i++;
		j++;
	}
	return (tokens);
}