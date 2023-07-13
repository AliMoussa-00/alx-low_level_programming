#ifndef MAIN_H
#define MAIN_H

int _putchar(char c);

/**
 * malloc_checked -  allocate memory using malloc.
 * @b: size of memory.
 *
 * Return: void.
 */
void *malloc_checked(unsigned int b);

/**
 * string_nconcat -  concatenates two strings.
 * @s1: string 1.
 * @s2: string 2.
 * @n: num of chars
 *
 * Return: void.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n);

/**
 * _calloc -  allocates memory for an array.
 * @nmemb: number of elements.
 * @size: size of elements.
 *
 * Return: pointer to memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size);

/**
 * array_range -  create an array of integers.
 * @min: first element of array.
 * @max: last element of array.
 *
 * Return: pointer to array.
 */
int *array_range(int min, int max);

/**
 * realloc -  reallocates a memory block.
 * @ptr: pointer to memory block.
 * @old_size: old size of memory block.
 * @new_size: new size of memory block.
 *
 * Return: pointer to memory block.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);

#endif
