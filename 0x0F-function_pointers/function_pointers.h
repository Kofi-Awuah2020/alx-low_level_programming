#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H
int _putchar(char c);
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void(*action)(int));
int int_index(int *array, int size, int (*cmp)(int));
3-op_functions.c;
3-get_op_func.c;
100-main_opcodes.c;

#endif
