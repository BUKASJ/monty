#include "monty.h"
/**
 * op_add - adds the top two elements of the stack
 * @stack: double pointer to the stack
 * @line_number: current number_line
 * @op_pop: removes the top element of the stack
 *
 * Return: void
 */

void op_add(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%u: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	int result = (*stack)->n + (*stack)->next->n;

	op_pop(stack, line_number);
	(*stack)->n = result;
}
