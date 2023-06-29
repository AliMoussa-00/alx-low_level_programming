#include "main.h"
#include <stdio.h>
/**
 * reverse_array -  a function that compares two strings.
 * @a: pointer to array int
 * @n: length of array
 *
 * Return: void.
 */
void reverse_array(int *a, int n)
{
	int *start, *end;
	int t;

	start = a;
	end = a + n - 1;

	while (start < end)
	{
		t = *start;
		*start = *end;
		*end = t;

		start++;
		end--;
	}
}
