#include "main.h"

/**
* print_sign - check the sign of the num
* @n: the number to check
*
* Return: 1 if positive 0 if num = 0 else -1.
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
