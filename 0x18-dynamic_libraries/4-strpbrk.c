#include "main.h"
#include <stdio.h>
/**
 * _strpbrk -  search a string for any of a set of bytes.
 * @s: pointer to the string.
 * @accept: pointer to string.
 *
 * Return: number of bytes.
 */
char *_strpbrk(char *s, char *accept)
{

	while (*s != '\0')
	{
		char *c = accept;

		while (*c != '\0')
		{
			if (*s == *c)
			{
				return (s);
			}
			c++;
		}
		s++;
	}
	return (NULL);
}
