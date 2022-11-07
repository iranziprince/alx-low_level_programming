#include <unistd.h>

/**
 * _putchar - writes character c to stdout
 * @c: character to print
 *
 * Return: Success on 1
 * On error, -1 is returned, and errorno is set appropriately
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}
