#include <stdio.h>

/**
* main - entry point.
*
* Return: 0.
*/

int main(void)
{
	long long int num = 612852475143;

	int largest_factor = 0, i;

	while (num % 2 == 0)
	{
		largest_factor = 2;

		num /= 2;
	}

	for (i = 3; i * i <= num; i += 2)
	{
		while (num % i == 0)
		{
			largest_factor = i;

			num /= i;
		}
	}

	printf("%d", largest_factor);

	return (0);
}
