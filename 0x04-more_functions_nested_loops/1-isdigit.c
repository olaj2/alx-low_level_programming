#include"main.h"

/**
 * _isdigit - check if thenumbers are from 0 - 9
 * @c: Parameter to check for
 *
 * Return: 0 or 1 for it
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
