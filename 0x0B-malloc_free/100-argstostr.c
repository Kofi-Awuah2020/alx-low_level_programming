#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - function concatenates all the arguments of your programs.
 * @ac: argument count
 * @av: pointer to pointers of strings
 *
 * Return: char*, NULL If fail
 */
char *argstostr(int ac, char **av)
{
	int position;
	int size = 0;
	int x, y;
	char *str;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (x = 0; x < ac; x++)
	{
		size += strlen(av[x]) + 1;
	}

	str = malloc(sizeof(char) * size + 1);
	if (str == NULL)
	{
		return (NULL);
	}

	for (x = 0, position = 0; x < ac; x++)
	{
		for (y = 0; av[x][y] != '\0'; y++)
		{
			str[position] = av[x][y];
			position++;
		}
		str[position] = '\n';
		position++;
	}
	str[position] = '\0';
	return (str);
}
