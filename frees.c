#include "monty.h"

void free_tokens(char **new, int i)
{
   while (i >= 0)
	{
		i--;
		free(new[i]);
	}
	free(new);
}

void free_line(char *line)
{
    free(line);
}