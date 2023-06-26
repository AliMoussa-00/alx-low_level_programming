#include "main.h"
#include <string.h>
/**
* puts_half -  prints half of a string.
* @str: pointer to string
*
* Return: void.
*/
void puts_half(char *str)
{
	int size = strlen(str), i, k;

	if ((size % 2) == 0)
		k = (size / 2);
	else
		k = ((size - 1) / 2) + 1;

	for (i = k; i < size; i++)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}
