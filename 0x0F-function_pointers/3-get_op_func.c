#include <stdio.h>
#include <string.h>
#include "3-calc.h"

/**
 * get_op_func - selects the correct function to
 * perform the operation asked by the user.
 * @int: integer 1
 * @int: integer 2
 * @s: Operator sign
 *
 * Return: Pointer to a function based on user input
 */
int(*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	for (i = 0; i < 6; i++)
	{
		if (ops[i].op != NULL && strcmp(s, ops[i].op) == 0)
		{
			return (ops[i].f);
		}
	}
	return (NULL);
}
