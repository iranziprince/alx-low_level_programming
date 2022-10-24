#include "main.h"

/**
 * rev_string - reverse a string
 * @s: input
 * Return: string in reverse
 */
void rev_string(char *s)
{
	char v = s[0];
	int d = 0;
	int i;

	while (s[d] != '\0')
		d++;
	for (i = 0; i < d; i++)
	{
		d--;
		v = s[i];
		s[i] = s[d];
		s[d] = v;
	}
}
