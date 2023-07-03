#include "main.h"
#include <stdio.h>
/**
  * _strstr - entry point
  * @haystack: param
  * @needle: param
  *
  * Return: poiner
  */
char *_strstr(char *haystack, char *needle)
{

	while (*haystack != '\0')
	{
		char *x = haystack;
		char *c = needle;

		while (*c != '\0' && *x == *c)
		{
			c++;
			x++;
		}
		if (*c == '\0')
		{
			return (haystack);
		}

		haystack++;
	}

	return (NULL);
}
