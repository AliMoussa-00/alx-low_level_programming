#ifndef MAIN_H
#define MAIN_H

int _putchar(char c);

/**
 * create_array - array of chars and initializes it whith a specific char.
 * @size: size of array.
 * @c: char.
 *
 * Return: pointer to array.
 */
char *create_array(unsigned int size, char c);

/**
 * _strdup - copy string to allocated memory.
 * @str: pointer to char.
 *
 * Return: pointer to array.
 */
char *_strdup(char *str);

/**
 * str_concat - concatenate two strings.
 * @s1: pointer to str1.
 * @s2: pointer to str2.
 *
 * Return: pointer to array.
 */
char *str_concat(char *s1, char *s2);

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: int .
 * @height: int.
 *
 * Return: pointer to array.
 */
int **alloc_grid(int width, int height);

/**
 * argstostr -  concatenates all the arguments of your program.
 * @ac: args size .
 * @av: args value.
 *
 * Return: pointer to array.
 */
char *argstostr(int ac, char **av);

#endif
