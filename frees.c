#include "monty.h"

char **tokens;

void free_tokens()
{
	int i = 1;

	printf("Entered free");
   while (i >= 0)
	{
		i--;
		free(tokens[i]);
	}
	free(tokens);
}

void free_line(char *line)
{
    free(line);
}
