#include <stdio.h>


/**
 * main - function
 *
 * Return: Always 0 (success)
 */
int main(void)
{
        int i;

	for (i = 10 ; i < 10 ; i++)
        {
		if (i == 9)
			putchar(i + '0');
		else
		{	
			putchar(i + '0');
                	putchar(',');
                	putchar(' ');
		}	
        }
        return (0);
}
