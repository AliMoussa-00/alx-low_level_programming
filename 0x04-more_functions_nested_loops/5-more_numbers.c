#include "main.h"

/**
* more_numbers - prints 10 times the numbers, from 0 to 14
*
* Return: void.
*/

void more_numbers(void)
{
	for (int i = 0; i < 11; i++)
	{
		for (int j = 0; j < 15; j++)
		{
			_putchar(j + '0');
		}
		_putchar('\n');
	}
}
