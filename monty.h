#ifndef MONTY_FILE
#define MONTY_FILE

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <ctype.h>
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

extern unsigned int gline_num;
void (*get_op(char *opcode))(stack_t **stack, unsigned int line_number);

void op_push(stack_t **stack, unsigned int line_number);
void op_pall(stack_t **stack, unsigned int line_number);
void push(stack_t **stack, unsigned int line_num);

void *add_dnode_int_end(stack_t **head, int n);
int isnum(char *argnum);

void free_stack_t(stack_t **head);
void pall(stack_t **stack, unsigned int line_num);
void failure(stack_t **stack, unsigned int line_num);
void pint(stack_t **stack, unsigned int line_num);
void pop(stack_t **stack, unsigned int line_num);
void swap(stack_t **stack, unsigned int line_num);
void add(stack_t **stack, unsigned int line_num);
void sub(stack_t **stack, unsigned int line_num);
void op_div(stack_t **stack, unsigned int line_num);
void mul(stack_t **stack, unsigned int line_num);
void mod(stack_t **stack, unsigned int line_num);
void pchar(stack_t **stack, unsigned int line_num);
void pstr(stack_t **stack, unsigned int line_num);
void pstrfromtail(stack_t **stack, unsigned int line_num);
void rotl(stack_t **stack, unsigned int line_num);
void rotr(stack_t **stack, unsigned int line_num);
#endif
