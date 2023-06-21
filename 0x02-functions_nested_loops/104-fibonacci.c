#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0.
 */
int main(void)
{
	int i;

	unsigned long pp = 0, p = 1, sum, pp_half1, pp_half2, p_half1, p_half2;

	unsigned long half1, half2;

	for (i = 0; i < 92; i++)
	{
		sum = pp + p;
		printf("%lu, ", sum);
		pp = p;
		p = sum;
	}
	pp_half1 = pp / 10000000000;
	p_half1 = p / 10000000000;
	pp_half2 = pp % 10000000000;
	p_half2 = p % 10000000000;
	for (i = 93; i < 99; i++)
	{
		half1 = pp_half1 + p_half1;
		half2 = pp_half2 + p_half2;
		if (pp_half2 + p_half2 > 9999999999)
		{
			half1 += 1;
			half2 %= 10000000000;
		}
		printf("%lu%lu", half1, half2);
		if (i != 98)
			printf(", ");
		pp_half1 = p_half1;
		pp_half2 = p_half2;
		p_half1 = half1;
		p_half2 = half2;
	}
	printf("\n");
	return (0);
}
