#include "function_pointers.h"

/**
 * int_index - function that searches for an integer.
 * @array: the array of integers
 * @size: the size of the array
 * @cmp: a pointer to the fuction to be used to compare values
 *
 * Return: returns the index of the first element for which
 * the cmp function does not return 0
 * If no element matches, return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (index = 0; index < size; index++)
	{
		if (cmp(array[index]) != 0)
		return (index);
	}
	return (-1);
}
