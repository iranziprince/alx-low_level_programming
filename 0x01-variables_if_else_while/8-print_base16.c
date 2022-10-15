#include <stdio.h>

/**
 * main - print the numbers in base 16
 * Return: Always 0
 */
int main(void)
{
	int n;
	char l;

	for (n = 0; n < 16; n++)
		putchar((n % 16) + '0');

	for (l = ''a; l <= 'f'; l++)
		putchar(l);

	putchar('\n');

	return (0);
}

