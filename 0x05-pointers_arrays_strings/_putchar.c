#include <unistd.h>

/**
 * _putchar - writes character c to stdout
 * Return: On success 1
 */
int _putchar(chra c)
{
	return (write(1, &c, 1));
}
