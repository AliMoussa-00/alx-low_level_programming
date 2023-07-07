#include "main.h"
/**
 * _memcpy -  copies memory area.
 * @src: pointer to the source block of memory.
 * @dest: pointer to destination memory.
 * @n: number of memory to be copied.
 *
 * Return: pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *x = dest;
	unsigned int i = 0;

	while (i < n)
	{
		*(x + i) = *(src + i);
		i++;
	}
	return (dest);
}
