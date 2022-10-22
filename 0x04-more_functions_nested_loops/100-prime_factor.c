#include "main.h"
#include <stdio.h>
#include<math.h>

/**
 * main - print largest prime factor of a number
 * Return: Always 0
 */

int getMaxPrimeFactor(int n)
{
	int i, max = -1;

	while (n % 2 == 0)
	{
		max = 2;
		n = n / 2;
	}
	for (i = 3; i <= sqrt(n); i = i + 2)
	{
		while (n % i == 0)
		{
			max = i;
			n = n / i;
		}
	}
	if (n > 2)
	{
		max = n;
	}
	return (max);
}
int main(void)
{
	int n;

	printf("Enter a number: ");
	scanf("%d", &n);
	printf("Max prime factor: %d", getMaxPrimeFactor(n));
	return (0);
}

