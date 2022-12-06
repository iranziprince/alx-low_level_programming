#include "main.h"

/**
 * print_binary - Prints the binary presentation of a number
 *  @n: The number to be print
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);

	_putchar((n & 1) + '0');
}
