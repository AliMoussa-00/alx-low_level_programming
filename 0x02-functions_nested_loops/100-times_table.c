#include "main.h"

#include "main.h"

/**
* print_times_table - prints the n times table, starting with 0.
* @n: number of multiplication
*
* Return: void.
*/
void print_times_table(int n)
{
	int i = 0;

	if (n <= 15 && n >= 0)
	{
		while (i <= n)
		{
			int j = 1;

			_putchar('0');
			while (j <= n)
			{
				int k = i * j;

				_putchar(',');
				_putchar(' ');

				if (k <= 9)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(k + '0');
				}
				else if (k <= 99)
				{
					_putchar(' ');
					_putchar((k / 10) + '0');
					_putchar((k % 10) + '0');
				}
				else
				{
					_putchar((k / 100) + '0');
					_putchar(((k % 100)/10) + '0');
					_putchar(((k % 100)%10) + '0');
				}

				j++;
			}
			_putchar('\n');
			i++;
		}
	}
}
