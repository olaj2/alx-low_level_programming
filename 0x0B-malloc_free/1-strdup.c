#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - duplicate to the new memory allocation
 * @str: char
 * Return: 0
 */

char *_strdup(char *str)
{
	char *aaa;
	int index, r = 0;

	if (str == NULL)
		return (NULL);
	index = 0;
	while (str[index] != '\0')
		index++;
	aaa = malloc(sizeof(char) * (index + 1));
	if (aaa == NULL)
		return (NULL);
	for (r = 0; str[r]; r++)
		aaa[r] = str[r];
	return (aaa);
}
