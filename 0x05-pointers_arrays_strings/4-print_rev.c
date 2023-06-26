#include "main.h"
#include <string.h>
/**
* print_rev - function that prints a string, followed by a new line.
* @s: pointer to string
*
* Return: void.
*/

void print_rev(char *s)
{
	int i;

	for (i = strlen(s) - 1; i >= 0; i--)
	{
		_putchar(*(s + i));
	}
	_putchar('\n');
}
