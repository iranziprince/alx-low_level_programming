#include <unistd.h>

/**
 * _putchar - assigns character c to stdout
 * @c: character to print 
 *
 * Reurn: Success on 1
 * on error, 1 is returned and errno is set appropriately
 */
int _putchar(char c)
{
	return(write(1, &c, 1))
}
