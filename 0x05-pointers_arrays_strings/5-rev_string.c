#include "main.h"
#include <string.h>
/**
* rev_string - a function that reverses a string.
* @s: pointer to string
*
* Return: void.
*/

void rev_string(char *s)
{
	int i, size = strlen(s);
	char c;

	for (i = 0; i < (size / 2); i++)
	{
		c = s[i];
		s[i] = s[size - i - 1];
		s[size - i - 1] = c;
	}
}
