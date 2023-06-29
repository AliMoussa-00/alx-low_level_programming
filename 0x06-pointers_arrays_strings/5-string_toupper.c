#include "main.h"
/**
 * string_toupper -  a function that changes lower to uppercase.
 * @s: pointer to char
 *
 * Return: pointer to char.
 */
char *string_toupper(char *s)
{
	char *c;

	c = s;

	while (*c != '\0')
	{
		if (*c == '\\')
			c++;
		if (*c >= 'a' && *c <= 'z')
		{
			*c -= ' ';
		}
		c++;
	}

	return (s);
}
