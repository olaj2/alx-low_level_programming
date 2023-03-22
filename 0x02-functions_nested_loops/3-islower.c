#include "main.h"

/**
 * _islower - function
 * Description: function that checks for lowercase character.
 * @c: Parameter to be executed
 * Return: 1 if it is a lowwercase and 0 when otherwise
 */

int _islower(int c)

{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
