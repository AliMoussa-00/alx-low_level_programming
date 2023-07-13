#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * array_range -  create an array of integers.
 * @min: first element of array.
 * @max: last element of array.
 *
 * Return: pointer to array.
 */
int *array_range(int min, int max)
{
	int *a, i, j;

	if (min > max)
		return (NULL);

	a = malloc(sizeof(*a) * (max - min + 1));
	if (a == NULL)
		return (NULL);

	j = 0;
	i = min;

	while (i <= max)
	{
		*(a + j) = i;
		i++;
		j++;
	}

	return (a);
}
