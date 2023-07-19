#ifndef MAIN_H
#define MAIN_H

/**
 * print_name -  print name.
 * @name: pointer to the name.
 * @f: a pointer to a function that takes a pointer to string
 *
 * Return: void.
 */
void print_name(char *name, void (*f)(char *));

/**
 * array_iterator - execute a function on each element of array.
 * @array: pointer to array.
 * @size: size of array.
 * @action: pointer to the function
 *
 * Return: void.
 */
void array_iterator(int *array, size_t size, void (*action)(int));

/**
 * int_index - search for an integers.
 * @array: pointer to array.
 * @size: size of array.
 * @cmp: pointer to the function
 *
 * Return: void.
 */
int int_index(int *array, int size, int (*cmp)(int));

#endif
