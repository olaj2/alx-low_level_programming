#include "main.h"

/**
 * _abs - function
 * description: computes absolute value of an integer.
 * @a: parameter funtion for absolute value of an integer.
 * Return: a (success)
 */
int _abs(int a)
{
	if (a < 0)
		a = -(a);
	else if (a >= 0)
		a = a;
	return (a);
}
