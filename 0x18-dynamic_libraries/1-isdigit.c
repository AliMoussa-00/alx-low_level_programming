#include "main.h"

/**
* _isdigit - a function that checks for a digit (0 through 9).
* @c: the char to check
*
* Return: 1 if true else 0.
*/

int _isdigit(int c)
{
	return ((c >= 48 && c <= 57) ? 1 : 0);
}
