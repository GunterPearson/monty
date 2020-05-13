#include "monty.h"

/**
 * main - Opens monty files and executes
 * @argc: Number of arguments
 * @argv: Arguments
 * Return: 0 for success, multiple exit statuses
 */

char **tokens = NULL;

int main(int argc, char *argv[])
{
	FILE *fd = NULL;
	stack_t **stack;

	if (argc != 2)
	{
		write(2, "USAGE: monty file\n", 18);
		exit(EXIT_FAILURE);
	}
	fd = fopen(argv[1], "r");
	if (fd == NULL)
	{
		write(2, "Error: Can't open file ", 23);
		write(2, argv[1], strlen(argv[1]));
		write(2, "\n", 1);
		exit(EXIT_FAILURE);
	}
	readline(fd);
	fclose(fd);
	return (0);
}
