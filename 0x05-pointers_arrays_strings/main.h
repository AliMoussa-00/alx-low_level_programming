#ifndef MAIN_H
#define MAIN_H
/**
 * _putchar - print
 * @c: char
 *
 * Return: char
 */
int _putchar(char c);

/**
* reset_to_98 - print_number.
* @n: pointer to int
*
* Return: void.
*/

void reset_to_98(int *n);
/**
* swap_int - print_number.
* @a: pointer to int
* @b: pointer to int
*
* Return: void.
*/

void swap_int(int *a, int *b);
/**
* _strlen - a function that returns the length of a string.
* @s: pointer to char
*
* Return: int.
*/

int _strlen(char *s);
/**
* _puts - function that prints a string, followed by a new line.
* @str: pointer to string
*
* Return: void.
*/

void _puts(char *str);

/**
* print_rev - function that prints a string, followed by a new line.
* @s: pointer to string
*
* Return: void.
*/

void print_rev(char *s);

/**
* rev_string - a function that reverses a string.
* @s: pointer to string
*
* Return: void.
*/

void rev_string(char *s);

/**
* rev_string - prints every other character of a string.
* @str: pointer to string
*
* Return: void.
*/

void puts2(char *str);
#endif
