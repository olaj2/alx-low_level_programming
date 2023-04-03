#include <stdio.h>
#include "main.h"

/**
 * *_strchr - fuction area
 * @s: input area
 * @c: input area
 * Return: 0
 */

char *_strchr(char *s, char c)
{
	int j;

	for (j = 0; s[j] >= '\0'; j++)
	{
		if (s[j] == c)
			return (s + j);
	}
	return (NULL);
}
