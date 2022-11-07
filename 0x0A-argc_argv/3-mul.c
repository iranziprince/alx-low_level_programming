#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Prints the multiplication of two numbers
 * @argc: The number of arguments
 * @argv: An array of pointers
 *
 * Return: 0 if true, 1 if false
 */
int main(int argc, char *argv[])
{
	int a, b, p;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	a = atoi(argv[1]);
	b = atoi(argv[2]);
	p = a * b;

	printf("%d\n", p);

	return (0);
}
