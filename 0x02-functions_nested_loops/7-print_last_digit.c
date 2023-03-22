#include "main.h"

/**
 * print_last_digit - function
 * description: function that prints the last digit of a number.
 * @a: parameter function for the last digit of a number.
 * Return: g (success)
 */

int print_last_digit(int a)
{
	int g;

	g = a % 10;
	if (a < 0)
		g = -g;
	_putchar(g + '0');
	return (g);

}
