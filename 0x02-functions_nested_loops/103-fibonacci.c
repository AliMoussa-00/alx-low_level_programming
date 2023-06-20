#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0.
 */
int main(void)
{
	unsigned long sum = 0, pp = 1, p = 2, i = 4000000;

	while (sum <= i)
	{
		if (sum % 2 == 0)
			sum = p + pp;
		pp = p;
		p = sum;
	}
	printf("%lu\n", sum);
	return (0);
}
