#include "main.h"
#include <stdling.h>

/**
 * malloc_checked - function allocates memory using
 * @b: number of bytes to be allocated
 *
 * Return: void *, exit (98) if function fails
 */
void *malloc_checked(unsigned int b)
{
  void *ptr = malloc(b);
  
  if (!ptr)
  {
    exit (98);
  }
  return (ptr);
}
