#include "main.h"


/**
 * _strlen - Return the length of the string
 * @str: parameter
 *
 *Return: length of an str
 */

int _strlen(char *str)
{
	int length = 0;

	while (*str++)
		length++;
	return (length);
}
