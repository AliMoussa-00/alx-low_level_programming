#include "main.h"

/**
* print_diagonal -   a function that draws a diagonal line on the terminal.
* @n: num of chars
*
* Return: void.
*/

void print_diagonal(int n)
{
	int i = 1;

	if (n > 0)
	{
		while (i <= n)
		{
			int j = 0;

			while (j < i - 1)
			{
				_putchar(' ');
				j++;
			}
			_putchar('\\');
			_putchar('\n');
			i++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
