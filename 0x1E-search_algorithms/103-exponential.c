#include "search_algos.h"

/**
 * print_array - print the array from left to right
 * @array: the pointer to the first element of the array
 * @l: the left pointer of the array
 * @r: the right pointer of the array
 * @size: the size of the array
 * return: Nothin
 */
void print_array(int *array, size_t l, size_t r, size_t size)
{
	if (!array)
		return;

	printf("Searching in array: %d", array[l]);
	l++;
	while (l <= r && l < size)
	{
		printf(", %d", array[l]);
		l++;
	}

	printf("\n");
}

/**
 * binary_searchs - a function that searches for a value in
 *		an array of integers using the Binary search algorithm
 * @array:  pointer to the first element of the array to search in
 * @beg: the start of the array
 * @end: the end of the array
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: return the first index where value is located or -1.
 */

int binary_searchs(int *array, size_t beg, size_t end, size_t size, int value)
{
	size_t l, r, m;

	if (!array)
		return (-1);

	l = beg;
	r = end;

	while (l <= r)
	{
		print_array(array, l, r, size);

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

/**
 * exponential_search - a function that searches for a value in a sorted
 *		array of integers using the  Exponential search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: the first index where value is located or -1
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t bound, new_size;
	int index;

	if (!array)
		return (-1);

	bound = 1;

	while (bound < size && array[bound] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", bound, array[bound]);
		bound *= 2;
	}

	new_size = bound >= size ? size - 1 : bound;
	printf("Value found between indexes [%ld] and [%ld]\n", bound / 2, new_size);

	index =  binary_searchs(array, bound / 2, new_size, size, value);

	if (index != -1)
		return (index);

	return (-1);
}
