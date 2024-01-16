#include "search_algos.h"

/**
 * print_array - print the array from left to right
 * @array: the pointer to the first element of the array
 * @l: the left pointer of the array
 * @r: the right pointer of the array
 * return: Nothin
 */
void print_array(int *array, size_t l, size_t r)
{
	if (!array)
		return;

	printf("Searching in array: %d", array[l]);
	l++;
	while (l <= r)
	{
		printf(", %d", array[l]);
		l++;
	}

	printf("\n");
}

/**
 * binary_search - a function that searches for a value in
 *		an array of integers using the Binary search algorithm
 * @array:  pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: return the first index where value is located or -1.
 */

int binary_search(int *array, size_t size, int value)
{
	size_t l, r, m;

	if (!array)
		return (-1);

	l = 0;
	r = size - 1;

	while (l <= r)
	{
		print_array(array, l, r);

		m = (l + r) / 2;

		if (array[m] < value)
			l = m + 1;

		else if (array[m] > value)
			r = m - 1;

		else
			return (m);

	}
	return (-1);
}
