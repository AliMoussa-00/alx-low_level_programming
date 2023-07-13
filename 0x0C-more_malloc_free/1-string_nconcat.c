#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat -  concatenates two strings.
 * @s1: string 1.
 * @s2: string 2.
 * @n: num of chars
 *
 * Return: void.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i, j, size = 0, size_1, size_2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	size_1 = strlen(s1);
	size_2 = strlen(s2);

	if (n >= size_2)
		n = size_2;

	size = size_1 + n;

	s = malloc((sizeof(*s) * size) + 1);
	if (s == NULL)
		return (NULL);

	i = 0;
	while (i < size_1)
	{
		*(s + i) = s1[i];
		i++;
	}
	j = 0;
	while (j < n)
	{
		*(s + i) = s2[j];
		i++;
		j++;
	}
	*(s + i) = '\0';

	return (s);
}
