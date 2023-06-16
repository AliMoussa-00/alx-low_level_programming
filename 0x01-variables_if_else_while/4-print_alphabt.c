#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0 always successfull
 */

int main(void)
{
	int n = 97;

	while (n <= 122)
	{
		if (n == 101 || n == 113)
			n++;
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
