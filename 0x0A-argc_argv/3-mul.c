#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the multiplication of two numbers
 * @argc: The number of arguments
 * @argv: Array of pointers
 *
 * Return: If the program receives two arguments - 0
 *         If the program does not receive two arguments - 1
 */
int main(int argc, char *argv[])
{
	int a, b;

	if (arg == 3)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		printf("%d\n", a * b);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
