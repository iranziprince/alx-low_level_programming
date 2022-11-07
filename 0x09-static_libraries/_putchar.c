#include <unistd.h>
#include "main.h"

/**
 * _putchar - assign character c to stdout
 * @c: characetr to print
 *
 * Return: success on 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
