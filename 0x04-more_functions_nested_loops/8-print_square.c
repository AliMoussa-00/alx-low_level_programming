#include "main.h"

/**
* print_square -   a function that draws a diagonal line on the terminal.
* @size: dim of square
*
* Return: void.
*/

void print_square(int size)
{
	int i = 0;

	if (size > 0)
	{
		while (i < size)
		{
			int j = 0;

			while (j < size)
			{
				_putchar('#');
				j++;
			}
			_putchar('\n');
			i++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
