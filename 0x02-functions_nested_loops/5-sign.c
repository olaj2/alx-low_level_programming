#include "main.h"

/**
 * print_sign - function
 * Description: Write a function that prints the sign of a number.
 * @n: Parameter for the function.
 * Return: 1, 0, and -1 if all three condition are met.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}

	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}

	else
	{
		_putchar('-');
		return (-1);
	}

}