#include "main.h"

/**
* times_table - prints the 9 times table, starting with 0.
*
* Return: value of the last digit.
*/
void times_table(void)
{
	int i = 0;

	while (i < 10)
	{
		int j = 0;

		while (j < 10)
		{
			_putchar((i * j) + '0');

			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
			j++;
		}
		i++;
	}
}
