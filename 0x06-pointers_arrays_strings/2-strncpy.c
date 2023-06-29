#include "main.h"
/**
 * _strncpy -  a function that copies a string.
 * @dest: pointer to destination string
 * @src: pointer to source string
 * @n: number of bytes from src
 *
 * Return: pointer to char.
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *t;
	int i = 0;

	t = dest;

	while (i < n && *src != '\0')
	{
		*t = *src;
		i++;
		t++;
		src++;
	}

	while (i < n)
	{
		*t = '\0';
		t++;
		i++;
	}

	return (dest);
}
