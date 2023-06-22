#include "main.h"

/**
* print_triangle -    function that prints a triangle.
* @size: height of triangle
*
* Return: void.
*/

void print_triangle(int size)
{
	if (size > 0)
	{
		for (int i = 1; i <= size; i++)
		{
			for (int j = size - i; j > 0; j--)
			{
				_putchar(' ');
			}
			for (int k = 1; k <= i ; k++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar(' ');
	}
}
