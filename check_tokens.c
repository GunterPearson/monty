#include "monty.h"

/**
* check_tokens - Checks tokens for empty or non int
* @fd: File
* @stack: The stack
* @line: The line
* @line_num: The linew number
* Return: 0 for success
*/

int check_tokens(FILE *fd, stack_t *stack, char *line, unsigned int line_num)
{
    int i = 0;
    char *temp = tokens[1];
    char *push = "push";

    if (strcmp(tokens[0], push))
        return (0);
    while (temp[i] != '\0')
    {
        if (temp[i] == '\n')
            temp[i] = '\0';
        i++;
    }
    if (temp[0] == '\0')
    {
        free_stack(&stack);
        free_tokens();
        free(line);
        fclose(fd);
        fprintf(stderr, "L%u: usage: push integer\n", line_num);
        exit(EXIT_FAILURE);
    }
    if (is_int() == 1)
    {
        free_stack(&stack);
        free_tokens();
        free(line);
        fclose(fd);
        fprintf(stderr, "L%u: usage: push integer\n", line_num);
        exit(EXIT_FAILURE);
    }
    return (0);
}

/**
* is_int - Checks if integer
* Return: 1 for no, 0 for yes
*/

int is_int()
{
    int i = 0;
    char *temp = tokens[1];

    while (temp[i] != '\0')
    {
        if (!(isdigit(temp[i])))
            return (1);
        i++;
    }
    return (0);
}