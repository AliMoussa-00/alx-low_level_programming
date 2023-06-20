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
		int j = 1;

		_putchar('0');
		while (j < 10)
		{
			int k = i * j;

			_putchar(',');
			_putchar(' ');

			if (k <= 9)
			{
				_putchar(' ');
				_putchar(k + '0');
			}
			else
			{
				_putchar((k / 10) + '0');
				_putchar((k % 10) + '0');
			}

			j++;
		}
		_putchar('\n');
		i++;
	}
}
