#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0.
 */
int main(void)
{
	int i = 3, j = 4, sum = 0, p = 2, pp = 1;

	while (i <= 50)
	{
		sum = sum + p + pp;
		printf("%d", sum);
		if (j != 51)
			printf(", ");

		pp = p;
		p = sum;
		j++;
		i++;
	}
	printf("\n");
	return (0);
}
