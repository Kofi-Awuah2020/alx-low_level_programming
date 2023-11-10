#include <stdio.h>
#include <string.h>
#include "3-calc.h"

/**
 * get_op_func - selects the correct function to
 * perform the operation asked by the user.
 * @int: integer 1
 * @int: integer 2
 *
 * Return: Pointer to a function based on user input
 */
int(*get_op_func(char *s))(int, int)
{
	int i;
	op_t ops[] = {
	        {"+", op_add},
	        {"-", op_sub},
	        {"*", op_mul},
	        {"/", op_div},
	        {"%", op_mod},
	        {NULL, NULL}
	    };
	for (i = 0; i < 6; i++)
	{
		if (ops[i].operator != NULL && strcmp(s, ops[i].operator) == 0)
		{
			return (ops[i].operation);
		}
	}
	return (NULL);
}
