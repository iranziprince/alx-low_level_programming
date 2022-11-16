#include "function_pointers.h"

/**
 * array_iterator - executes a given function
 * @array: array of integers
 * @size: size of the array
 * @action: pointer to function
 *
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int));
{
	if (array == NULL || action == NULL)
		return;

	while (size-- > 0)
	{
		action(*array);
		array++;
	}
}
