#include "main.h"

/**
* _isalpha - check if char is alphabetic
* @c: the char to check
*
* Return: 1 is true else return 0
*/

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') ? 1 : 0);
}
