#include "main.h"
#include <stdio.h>
/**
 * cap_string -  a function that capitalizes all words of string.
 * @s: pointer to char
 *
 * Return: pointer to char.
 */
char *cap_string(char *s)
{
	char *c, *next;
	char seperators[] = " \n\t,;.!?\"(){}";
	int i;

	c = s;
	next = c + 1;

	if (*c >= 'a' && *c <= 'z')
		*c -= ' ';
	while (*c != '\0')
	{
		for (i = 0; seperators[i] != '\0'; i++)
		{
			if (*c == seperators[i] && (*next >= 'a' && *next <= 'z'))
			{
				*next -= ' ';
				break;
			}
		}
		c++;
		next++;
	}
	return (s);
}
