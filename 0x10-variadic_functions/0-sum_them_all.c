#include "variadic_functions.h"

/**
 * sum_them_all - calculate the sum of its's parameters
 * @n: number of arguments passed into the function
 *
 * Return: the resulting sum
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int index;
	int sum = 0;

	va_list list;

	va_start(list, n);
	for (index = 0; index < n; index++)
		sum += va_arg(list, int);
	va_end(list);
		return (sum);
}
