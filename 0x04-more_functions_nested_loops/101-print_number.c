#include "main.h"

/**
* print_number - print_number.
* @n: number
*
* Return: void.
*/

void print_number(int n)
{
	int i= 1;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	while (n / i > 9)
	{
		i *= 10;
	}

	while (i > 0)
	{
		_putchar((n / i) + '0');

		n %= i;

		i /= 10;
	}
}
