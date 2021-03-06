#ifndef _MONTY_
#define _MONTY_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

extern char **tokens;

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct stack_s
{
		int n;
		struct stack_s *prev;
		struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct instruction_s
{
		char *opcode;
		void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

/* IN BASICS.C */
char **strk(char *string);
int string_count(char *string);
int string_len(char *string);
int check_space(char c);
char *next_word(char *string);

/* IN bASICS_2.C */
int strtonum(char *token, unsigned int line_num);
int check_line(char *line);

/* IN CHECK_OPCODE.C */
void (*check_opcode(char *opcode))(stack_t**, unsigned int);
char *clean_opcode(char *temp);

/* IN CHECK_TOKENS.C */
int check_tokens(FILE *fd, stack_t *stack, char *line, unsigned int line_num);
int is_int(void);
int head_null(FILE *fd, char *line, stack_t *stack, unsigned int line_number);
int head_null_2(FILE *fd, char *line, stack_t *stack, unsigned int line_number);
int head_null_3(FILE *fd, char *line, stack_t *stack, unsigned int line_number);
int head_null_4(FILE *fd, char *line, stack_t **stack, unsigned int line_num);

/* IN READLINE.C */
int readline(FILE *fd);

/* IN NODE_FUNCTIONS.C */
void push_node(stack_t **head, unsigned int line_num);
void print_node(stack_t **head, unsigned int line_num);
void print_first(stack_t **head, unsigned int line_number);
void pop_stack(stack_t **head, unsigned int line_number);
void nop_nothing(stack_t **stack, unsigned int line_number);

/* IN NODE_FUNCTION_2.C */
void swap_top(stack_t **head, unsigned int line_number);
void add_top(stack_t **head, unsigned int line_number);
void sub_top(stack_t **head, unsigned int line_number);
void div_top(stack_t **head, unsigned int line_number);
void mul_top(stack_t **head, unsigned int line_number);

/* IN NODE_FUNCTIONS_3.C */
void mod_top(stack_t **head, unsigned int line_number);
void print_char(stack_t **head, unsigned int line_number);

/* IN FREES.C  */
void free_tokens(void);
void free_stack(stack_t **stack);


#endif
