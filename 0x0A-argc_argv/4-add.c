#include "main.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * main - prints the additions of positive nums.
 * @argc: number of args.
 * @argv: argument value.
 *
 * Return: if success 0, else 1.
 */
int main(int argc, char **argv)
{
	int i, sum = 0;
	char *s = *argv;

	while (*s != '\0')
	{
		if (*s < '0' || *s > '9')
		{
			printf("Error\n");
			return (1);
		}
		s++;
	}

	if (argc == 1)
	{
		printf("0\n");
		return (1);
	}

	for (i = 1; i < argc; i++)
	{
		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);

	return (0);
}
