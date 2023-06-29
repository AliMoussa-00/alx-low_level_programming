#include "main.h"
/**
 * _strcmp -  a function that compares two strings.
 * @s1: pointer to string 1
 * @s2: pointer to string 2
 *
 * Return: pointer to char.
 */
int _strcmp(char *s1, char *s2)
{
	int diff = 0;

	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 != *s2)
		{
			diff = *s1 - *s2;
			break;
		}
		else
		{
			s1++;
			s2++;
		}
	}

	return (diff);
}
