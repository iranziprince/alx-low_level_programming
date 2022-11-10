#include <unistd.h>

/**
 * _putchar - assign character c to stdout
 * @c: character to print
 *
 * Return: Success on 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1))
}
