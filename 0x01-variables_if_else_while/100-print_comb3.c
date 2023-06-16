#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0 always successfull
 */

int main(void)
{
	int n = 0;

	while (n <= 8)
	{
		int k = n + 1;

		while (k <= 9)
		{
			putchar(n + '0');
			putchar(k + '0');
			if (n != 8 && k != 9)
			{
				putchar(',');
				putchar(' ');
			}
			k++;
		}
		n++;
	}
	putchar('\n');
	return (0);
}
