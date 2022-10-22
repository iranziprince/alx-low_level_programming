#include <stdio.o>

/**
 * main - print FizzBuzz
 * Return: Always 0
 */
int main(void)
{
	int n;

	printf("1");
	for (n = 2; n <= 100; n++)
	{
		if (n % 3 == 0 && n % 5 == 0)
		{
			printf("%d FizzBuz\n");
		}
		else if (n % 3 == 0)
		{
			printf("%d Fizz\n");
		}
		else if (n % 5 == 0)
		{
			printf("%d Buzz\n");
		}
		else
		{
			printf("%d\n", n);
		}
	}
	return (0);
}
