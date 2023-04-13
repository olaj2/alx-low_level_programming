#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 ** _realloc - reallocates a mem block using malloc and free
 *
 * @ptr: pointer to the memory
 * @old_size: is the size, in bytes of the allocated space for ptr
 * @new_size: the new size, in bytes of the new mem block
 *
 * Return: NULL
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;
	unsigned int index, n = new_size;
	char *oldp = ptr;

	if (ptr == NULL)
	{
		p = malloc(new_size);
		return (p);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
		return (ptr);
	p = malloc(new_size);
	if (p == NULL)
		return (NULL);
	if (new_size > old_size)
		n = old_size;
	for (index = 0; index < n; index++)
		p[index] = oldp[index];
	free(ptr);
	return (p);
}
