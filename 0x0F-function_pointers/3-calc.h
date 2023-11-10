#ifndef _3_CALC_H
#define _3_CALC_H

/**
 * struct op - Struct op
 *
 * @operator: The operator
 * @operation: The function associated
 */
typedef struct op
{
    char *operator;
    int (*operation)(int a, int b);
} op_t;

#endif
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
int (*get_op_func(char *s))(int, int);
