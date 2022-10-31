#include "main.h"

/**
 * _memset - fills the first n bytes ot the memory area
 *           pointed to by @s with the constant byte @c
 * @s: A pointer to the memory area to be filled
 * @c: The character to fill the memory area with
 * @n: The number of bytes to be filled
 *
 * Return: A pointer to the filled memory area @s
 */
void *_memset(void *s, int c, size_t n)
{
	unsigned int in;
	unsigned char *memory = s, value = c;

	for (in = 0; in < n; in++)
		memory[in] = value;

	return (memory);
}
