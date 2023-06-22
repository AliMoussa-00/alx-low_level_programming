#include "main.h"

/**
* print_line -  a function that draws a straight line in the terminal.
* @n: num of chars
*
* Return: void.
*/

void print_line(int n)
{
	int i = 0;

	if (n > 0)
	{
		while (i < n)
		{
			_putchar('_');
			i++;
		}
	}
	_putchar('\n');
}
