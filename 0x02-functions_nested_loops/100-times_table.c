#include "main.h"
#include <stdio.h>
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

				printf(", ");
				if (k <= 9)
					printf("  %d", k);
				else if (k <= 99)
					printf(" %d%d", (k / 10), (k % 10));
				else
					printf("%d%d%d\n", (k / 100), ((k % 100) / 10), ((k % 100) % 10));
				j++;
			}
			i++;
		}
	}
}
