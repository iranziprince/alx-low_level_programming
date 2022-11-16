#include "function_pointers.h"
#include <stdlib.h>

/**
 * _putchar - assign character c to stdout
 * @c: character
 *
 * Return: Sucess on 1
 */
int _putchar(char c)
{
	return(write(1, &c, 1))
}
