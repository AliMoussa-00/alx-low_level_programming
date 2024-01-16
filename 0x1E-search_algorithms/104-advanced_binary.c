#include "search_algos.h"
#include <math.h>

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
 * _advanced_search - searching for the value index
 * @array: pointer to the first element of the array to search in
 * @left: the start of the array
 * @right: the end of the array
 * @value: the value to search for
 * Return: the first index where value is located or -1
 */
int _advanced_search(int *array, size_t left, size_t right, int value)
{
	size_t m;

	print_array(array, left, right);

	m = (left + right) / 2;

	if (left == right)
		return (array[m] == value ? (int)m : -1);

	if (array[m] < value)
		return (_advanced_search(array, m + 1, right, value));

	else if (array[m] > value)
		return (_advanced_search(array, left, m, value));

	else
	{
		/*chack if the previous is the same*/
		if ((m > 0) && (array[m - 1] == value))
			return (_advanced_search(array, left, m, value));

		return (m);
	}
}

/**
 * advanced_binary - enhance the advance binary search algorithm to always
 *		get the first itteration of the value
 * @array: pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: the first index where value is located or -1
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (!array)
		return (-1);

	if ((size == 1) && (*array == value))
		return (0);

	return (_advanced_search(array, 0, size - 1, value));
}
