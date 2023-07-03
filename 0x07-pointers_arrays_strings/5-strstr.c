#include "main.h"
#include <stdio.h>

/**
 * _strstr - function that locates a substring.
 * @haystack: pointer to string.
 * @needle: pointer to substring.
 *
 * Return: pointer to substring.
 */
char *_strstr(char *haystack, char *needle)
{
	char *x = haystack, *y = needle;
	int i = 0, k;

	if (*y == '\0')
	{
		while (*x != '\0')
			x++;
		return (x);
	}

	while (*y != '\0')
	{
		i++;
		y++;
	}
	y = needle;

	while (*x != '\0')
	{
		if (*x == *y)
		{
			char *a = x, *b = y, *f = x;

			k = 0;
			while (*a != '\0' && *b != '\0' && *a == *b)
			{
				k++;
				a++;
				b++;
			}
			if (k == i)
				return (f);
		}
		x++;
	}

	return (NULL);
}
