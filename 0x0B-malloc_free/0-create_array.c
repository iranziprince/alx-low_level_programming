#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creates an array of a string
 * @size: The size of the array to be initialized
 * @c: The specific char to intialize the array with
 *
 * Return: If size == 0 or the function fails
 *         Otherwise - a pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int p;

	if (size == 0)
		return (NULL);

	ar = malloc(sizeof(char) * size);

	if (ar == NULL)
		return (NULL);

	for (p = 0; p < size; p++)
		ar[p] = c;

	return (ar);
}
