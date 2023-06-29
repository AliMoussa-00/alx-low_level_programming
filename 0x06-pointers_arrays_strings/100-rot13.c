#include "main.h"
/**
 * rot13 -  a function that encode a string using rot13.
 * @s: pointer to char
 *
 * Return: pointer to char.
 */
char *rot13(char *s)
{
	char a[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char b[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	char *c;
	int i;

	c = s;

	while (*c != '\0')
	{
		for (i = 0; a[i] != '\0'; i++)
		{
			if (*c == a[i])
			{
				*c = b[i];
				break;
			}
		}
		c++;
	}
	return (s);
}
