#include "main.h"

/**
 * *_memcpy - function area
 * @dest: input area
 * @src: input area
 * @n: inpu area
 * Return: 0
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
		dest[j] = src[j];

	return (dest);
}
