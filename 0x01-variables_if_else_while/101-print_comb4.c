#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0 always successfull
 */

int main(void)
{
	int n = 0, k = 0, y = 0;

	while (n <= 7)
	{
		k = n + 1;
		while (k <= 8)
		{
			y = n + 2;
			while (y <= 9)
			{
				putchar(n + '0');
				putchar(k + '0');
				if (n != 7 || k != 8 || y != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
		n++;
	}
	putchar('\n');
	return (0);
}

