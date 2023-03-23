#include <stdio.h>

/**
 * main - main function
 * description: natural numbers below 10
 *Return: Always 0
 */
int main(void)
{
	int z;
	int sum;

	sum = 0;

	for (z = 0 ; z < 10 ; z++)
	{
		if ((z % 3 == 0) || (z % 5 == 0))
		{
			sum = sum + z;
		}
	}
	printf("%d", sum);
	return (0);
}
