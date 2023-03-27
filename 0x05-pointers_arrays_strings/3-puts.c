#include "main.h"


/**
 * _puts - display a string
 * @str: the string to be displayed
 *
 * Return: void
 */

void _puts(char *str)
{
	for (; *str != '\0'; str++)

	{
		_putchar(*str);
	}
	_putchar('\n');
}
