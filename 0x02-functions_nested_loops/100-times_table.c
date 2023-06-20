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
					printf("  ");
				if (k <= 99 && k > 9)
					printf(" ");

				printf("%d", k);
				j++;
			}
			printf("\n");
			i++;
		}
	}
}
