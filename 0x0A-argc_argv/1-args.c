#include <stdio.h>
#include "main.h"

/**
 * main - Prints the number of arguments passed to it
 * @argc: The number of arguments
 *  @argv: An array of pointers
 *
 *  Return: Always 0
 */
int main(int argc, char *argv[])
{
	(void) argc;
	printf("%d\n", argc - 1);

	return (0);
}
