#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Prints the addition of positive numbers
 * @argc: The number of arguments
 * @argv: An array of pointers
 *
 * Return: 0 if true, 1 if false
 */
int main(int argc, char *argv[])
{
	int n, dgt, s = 0;

	for (n = 1; n < argc; n++)
	{
		for (dgt = 0; argv[n][dgt]; dgt++)
		{
			if (argv[n][dgt] < '0' || argv[n][dgt] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		s += atoi(argv[n]);
	}

	printf("%d\n", s);

	return (0);
}
