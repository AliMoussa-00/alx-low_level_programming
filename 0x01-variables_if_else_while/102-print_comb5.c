#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0 always successfull
 */

int main(void)
{
	int n = 0, k = 0;

	while (n < 99)
	{
		k = n + 1;
		while (k < 100)
		{
			putchar(n / 10 + '0');
			putchar(n % 10 + '0');
			putchar(' ');
			putchar(k / 10 + '0');
			putchar(k % 10 + '0');

			if (n != 98 || k != 99)
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
