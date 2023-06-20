#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0.
 */
int main(void)
{
	int i = 3, j = 4;

	long double sum = 0, pp = 1, p = 2;

	printf("1, 2, ");

	while (i <= 98)
	{
		sum = p + pp;
		printf("%d", (int) sum);
		if (j != 99)
			printf(", ");

		pp = p;
		p = sum;
		j++;
		i++;
	}
	printf("\n");
	return (0);
}
