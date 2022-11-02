#include "main.h"

/**
 * _strchr - Locates a character at in a string
 * @s: The string to be searched out
 * @c: The character to be located in
 *
 * Return: If c is found - a pointer to the first occurence
 *         If c is not found - NULL
 */
char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; s[index] >= '\0'; index++)
	{
		if (s[index] == c)
			return (s + index);
	}

	return ('\0');
}