#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0.
 */
int main(void)
{
	int i = 3, j = 4, sum = 0, p = 0, pp = 0;

	while (i <= 50)
	{
		p = i - 1;
		pp = i - 2;

		sum += p + pp;
		printf("%d", sum);
		if (j != 50)
			printf(", ");
		j++;
		i++;
	}
	printf("\n");
	return (0);
}
