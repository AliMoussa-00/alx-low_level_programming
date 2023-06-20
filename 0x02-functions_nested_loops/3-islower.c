#include "main.h"

/**
* __islower - check if char is lowercase
* @c: the char to check
*
* Return: 1 is true else return 0/
*/
int _islower(int c)
{
	return ((c >= 'a' && c <= 'z') ? 1 : 0);
}

