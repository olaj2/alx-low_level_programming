#include "main.h"


/**
 * swap_int - swapping the value of two integers 
 * @a: the first integer
 * @b: the second integer
 *
 * Return: 0
 */

void swap_int(int *a, int *b)
/* function swapping the value of two integers. */
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
