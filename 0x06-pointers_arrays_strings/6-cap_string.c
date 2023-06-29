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
	char *c;
	char seperators[] = " \n\t,;.!?\"(){}";
	int seperator_exist = 0;
	int start = 1, i;

	c = s;

	while (*c != '\0')
	{
		if (start == 1 && *c >= 'a' && *c <= 'z')
		{
			*c -= ' ';
			start = 0;
		}

		if (seperator_exist == 0)
		{
			for (i = 0; s[i] != '\0'; i++)
			{
				if (*c == seperators[i])
				{
					seperator_exist = 1;
					break;
				}
			}
		}
		else
		{
			if (*c >= 'a' && *c <= 'z')
			{
				*c -= ' ';
			}
				seperator_exist = 0;
		}
		if (start != 0)
			start = 0;

		c++;
	}

	return (s);
}
