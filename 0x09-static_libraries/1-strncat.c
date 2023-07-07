#include "main.h"
/**
 * _strncat -  a function that concatenates two strings.
 * @dest: pointer to destination string
 * @src: pointer to source string
 * @n: number of bytes from src
 *
 * Return: pointer to char.
 */
char *_strncat(char *dest, char *src, int n)
{
	char *t;
	int i = 0;

	t = dest;

	while (*t != '\0')
	{
		t++;
	}

	while (*src != '\0' && i < n)
	{
		*t = *src;
		i++;
		src++;
		t++;
	}
	*t = '\0';

	return (dest);
}
