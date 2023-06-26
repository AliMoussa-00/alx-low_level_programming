#include "main.h"
#include <string.h>
/**
* puts2 - prints every other character of a string.
* @str: pointer to string
*
* Return: void.
*/

void puts2(char *str)
{
	int i, size = strlen(str);

	for (i = 0; i < size; i += 2)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}
