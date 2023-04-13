#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * *malloc_checked - cause normal process termination with a status value of 98
 *
 * @b: allocated memory
 *
 * Return: pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *index;

	index = malloc(b);
	if (index == NULL)
		exit(98);
	return (index);
}
