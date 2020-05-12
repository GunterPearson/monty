#include <monty.h>

/**
 * readline - Read a file line by line
 * @fd: File descriptor
 * Return: 0 on sucess
 */

int readline(FILE *fd)
{
	ssize_t rd;
	size_t size = 0;
	stack_t *lines;
	char *line;

	while ((ret = getline(&line, &size, fd)) != EOF)
	{

		free(line);
	}
}

/**
 * add_node_stack - Adding a node to struct
 * @head: Head of the list
 * @line: Line to add
 * Return: Return the head with new node
 */

stack_t *add_node_stack(stack_t **head, char *line)
{
	stack_t *newnode;
	stack_t *headsave = *head;

	newnode = malloc(sizeof(char) * strlen(line));
	if (newnode == NULL)
	{
		write(2, "Error: malloc failed\n", 21);
		exit(EXIT_FAILURE);
	}
	if (*head == NULL)
	{

	}
}
