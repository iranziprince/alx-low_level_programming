#include "main.h"
#include <stddef.h>

/**
 * _memcpy - Copies @n bytes from one  memory area pointed
 *          to by @src into that pointed to by @dest
 * @dest: A pointer to the memory area to copy @src into destination
 * @src: The source buffer to copy characters from source
 * @n: The number of bytes to copy from @src
 *
 * Return: A pointer to the destination buffer @dest
 */
void *_memcpy(void *dest, const void *src, unsigned int n)
{
	unsigned int index;
	unsigned char *destination = dest;
	const unsigned char *source = src;

	for (index = 0; index < n; index++)
		destination[index] = source[index];


	return (dest);
}
