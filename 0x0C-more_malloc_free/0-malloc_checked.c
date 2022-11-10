#include "main.h"

/**
 * malloc_checked - arrat to print a string
 * @b: number of memory allocation
 *
 * Return: Void
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
	{
		exit(98);
	}

	return (p);
}
