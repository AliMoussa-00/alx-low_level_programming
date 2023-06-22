#include <stdio.h>
#include <math.h>

/**
* main - entry point.
*
* Return: 0.
*/

int main(void)
{
	long int num = 612852475143;

	double square = sqrt(num);

	int largest_factor = 0, i;

	for (i = 1; i <= square; i++)
	{
		if (num % i == 0)
			largest_factor = num / i;
	}

	printf("%d\n", largest_factor);

	return (0);
}
