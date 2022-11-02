#include "main.h"
#include <unistd.h>

/**
 * _putchar - asign character c to stdout
 * @c: character to print
 *
 * Return: success on 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
