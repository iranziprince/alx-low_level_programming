#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: index
 *
 * Return: characher for pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *m;
	unsigned int l = n, i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i]; i++)
		l++;

	m = malloc(sizeof(char) * (l + 1));

	if (m == NULL)
		return (NULL);

	l = 0;

	for (i = 0; s1[i]; i++)
		m[l++] = s1[i];

	for (i = 0; s2[i] && i < n; i++)
		m[l++] = s2[i];

	m[l] = '\0';

	return (m);
i}
