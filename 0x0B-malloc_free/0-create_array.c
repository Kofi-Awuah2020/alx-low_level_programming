#include "main.h"
#include <stdlib.h>

/**
 * create_array -  function creates an array of characters
 * @size: size of array
 * @c: initialisation character
 *
 * Return: char * (Success), 0 (Fail)
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int x = 0;

	if (size == 0)
	{
		return (NULL);
	}
	str = malloc((sizeof(char) * (size + 1));
	if (str == NULL)
	{
		return (NULL);
	}
	while (x < size)
	{
		str[x] = c;
		x++;
	}
	str[x] = '\0';
	return (str);
}
