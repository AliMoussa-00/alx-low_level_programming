#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 1 (error)
 */
int main(void)
{
	char s[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	fprintf(stderr, "%s", s);
	return (1);
}
