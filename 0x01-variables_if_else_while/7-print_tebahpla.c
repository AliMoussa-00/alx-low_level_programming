#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0 always successfull
 */

int main(void)
{
	int n = 122;

	while (n >= 97)
	{
		putchar(n);
		n--;
	}
	putchar('\n');
	return (0);
}
