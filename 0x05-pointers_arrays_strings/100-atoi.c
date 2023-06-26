#include "main.h"
/**
* _atoi -  a function that convert a string to an integer.
* @s: pointer to string
*
* Return: int.
*/
int _atoi(char *s)
{
	int sign = 0, t = 0;
	unsigned int n = 0;

	while (*s != '\0')
	{
		if (sign == 0)
		{
			if (*s == '+')
				sign = 1;
			if (*s == '-')
				sign = -1;
		}
		if (*s >= '0' && *s <= '9')
		{
			t = *s - '0';
			if (n != 0)
				n *= 10;
			n += t;
		}
		s++;
	}
	return ((sign == -1) ? (-1 * n) : n);
}
