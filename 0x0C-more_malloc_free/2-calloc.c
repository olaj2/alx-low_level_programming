#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *_calloc - function allocates memory for an array of nmemb elements of size
 *  bytes each and returns a pointer to the allocated memory.
 *
 *  @nmemb: allocation of memory for array
 *  @size: allocates elements of size bytes
 *
 *  Return: 0 or NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *a;
	unsigned int b;

	if (nmemb == 0 || size == 0)
		return (NULL);
	a = malloc(nmemb * size);
	if (a == NULL)
		return (NULL);
	for (b = 0; b < (nmemb * size); b++)
		a[b] = 0;
	return (a);
}
