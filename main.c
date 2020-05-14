#include "monty.h"

char **tokens = NULL;

/**
 * main - Opens monty files and executes
 * @argc: Number of arguments
 * @argv: Arguments
 * Return: 0 for success, multiple exit statuses
 */

int main(int argc, char *argv[])
{
	FILE *fd = NULL;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	fd = fopen(argv[1], "r");
	if (fd == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	readline(fd);
	fclose(fd);
	return (0);
}
