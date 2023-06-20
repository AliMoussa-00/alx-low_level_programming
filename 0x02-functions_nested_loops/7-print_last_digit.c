#include "main.h"

/**
* print_last_digit - prints the last digit of a number
* @n: the number to check
*
* Return: value of the last digit.
*/
int print_last_digit(int n)
{
	int a = (n >= 0) ? n % 10 : (-n) % 10;

	_putchar(a + '0');
	return (a);
}
