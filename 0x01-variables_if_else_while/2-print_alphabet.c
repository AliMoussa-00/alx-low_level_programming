#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0 always successfull
 */

int main(void)
{
	int n = 97;

	while (n <= 127)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
