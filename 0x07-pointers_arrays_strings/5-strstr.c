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

	while (*x != '\0')
	{
		if (*x == *y)
		{
			char *a = x, *b = y;

			while (*a != '\0' && *b != '\0' && *a == *b)
			{
				a++;
				b++;
			}
			if (*b == '\0')
				return (x);
		}
		x++;
	}

	return (NULL);
}
