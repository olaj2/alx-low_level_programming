#include "main.h"

/**
 * print_alphabet_x10 - function
 * Description: a function that prints 10 times the alphabet, in lowercase
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	int q;
	char u;

	for (q = 1 ; q <= 10 ; q++)
	{
		for (u = 'a' ; u <= 'z' ; u++)
			_putchar(u);
		_putchar('\n');
	}
}
