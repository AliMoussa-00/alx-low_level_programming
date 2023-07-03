#include "main.h"
#include <stdio.h>
/**
 * _strchr -  find char in string.
 * @s: pointer to the string.
 * @c: char to find.
 *
 * Return: pointer to first c.
 */
char *_strchr(char *s, char c)
{
	char *x = s;
	char *f = NULL;

	while (*x != '\0')
	{
		if (*x == c)
		{
			f = x;
			break;
		}
		x++;
	}

	return (f);
}
