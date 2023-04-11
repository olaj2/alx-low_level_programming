#include "main.h"

/**
 * main - fuction that print to its name
 * @argc: parameter argc
 * @argv: an array of command
 *
 * Return: 0
 */

int main(int argc _attribute_((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
