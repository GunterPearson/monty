#include "monty.h"

/**
 * push_node - Adding a node to struct
 * @head: Head of the list
 * @line_num: Line number of command
 * Return: Return the head with new node
 */

void push_node(stack_t **head, unsigned int line_num)
{
  char **tokens;
  stack_t *newnode;
  stack_t *headsave = *head;
  printf("in Push_node\n");
  printf("tokens[0] is: %s\n", tokens[0]);
  printf("tokens[1] is: %s\n", tokens[1]);
  newnode = malloc(sizeof(stack_t));
  if (newnode == NULL)
    {
      write(2, "Error: malloc failed\n", 21);
      exit(EXIT_FAILURE);
    }
  newnode->n = strtonum(tokens[1]);
  printf("newnode->n is: %d\n", newnode->n);
  if (*head == NULL)
    {
      newnode->next = NULL;
      newnode->prev = NULL;
      *head = newnode;
      return;
    }
  newnode->prev = NULL;
  newnode->next = *head;
  *head = newnode;
}

/**
 * print_node - prints out list
 * @head: Head of the list
 * @line_num: line number of command
 * Return: void
 */
void print_node(stack_t **head, unsigned int line_num)
{
  stack_t *temp = *head;

  printf("in print_node\n");
  while (temp && temp->next)
    {
      printf("%d\n", temp->n);
      temp = temp->next;
    }
}
