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

	while (*y != '\0')
	{
		while (*x != '\0')
		{
			if (*x == *y)
			{
				char *a = x, *b = y, *f = x;

				k = 0;
				while (*a != '\0' && *b != '\0')
				{
					i++;
					if (*a == *b)
						k++;
					else
						break;
					a++;
					b++;
				}
				if (i == k)
					return (f);
			}
			x++;
		}
		y++;
	}
	return (NULL);
}
