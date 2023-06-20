#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0.
 */
int main(void)
{
	unsigned long sum = 0, s = 0, pp = 1, p = 2, i = 4000000;

	while (sum <= i)
	{
		sum = p + pp;
		if (sum % 2 == 0)
			s += sum;
		pp = p;
		p = sum;
	}
	printf("%lu\n", sum);
	return (0);
}
