#include "main.h"
/**
 * _strcat -  a function that concatenates two strings.
 * @dest: pointer to destination string
 * @src: pointer to source string
 *
 * Return: pointer to char.
 */
char *_strcat(char *dest, char *src)
{
	char *t;

	t = dest;

	while (*t != '\0')
	{
		t++;
	}
	while (*src != '\0')
	{
		*t = *src;
		src++;
		t++;
	}
	*t = '\0';

	return (dest);
}
