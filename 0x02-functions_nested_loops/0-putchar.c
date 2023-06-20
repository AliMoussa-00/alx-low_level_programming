#include "main.h"

/**
 * main - entry point
 *
 * Return: 0 always successfull
 */
int main(void)
{
	char s[] = "_putchar";
	int i = 0;

	while (i < 9)
	{
		_putchar(s[i]);
		i++;
	}

	_putchar('\n');

	return (0);
}
