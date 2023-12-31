#ifndef MAIN_H
#define MAIN_H

int _putchar(char c);
/**
 * _memset -  allows you to set a block of memory to a specific value.
 * @s: pointer to the block of memory to be set;
 * @b: value to be set;
 * @n: number of memory to be set.
 *
 * Return: pointer to s.
 */
char *_memset(char *s, char b, unsigned int n);

/**
 * _memcpy -  copies memory area.
 * @src: pointer to the source block of memory.
 * @dest: pointer to destination memory.
 * @n: number of memory to be copied.
 *
 * Return: pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n);

/**
 * _strchr -  find char in string.
 * @s: pointer to the string.
 * @c: char to find.
 *
 * Return: pointer to first c.
 */
char *_strchr(char *s, char c);

/**
 * _strspn -  gets the length of prefix substring.
 * @s: pointer to the string.
 * @accept: pointer to string.
 *
 * Return: number of bytes.
 */
unsigned int _strspn(char *s, char *accept);

/**
 * _strpbrk -  search a string for any of a set of bytes.
 * @s: pointer to the string.
 * @accept: pointer to string.
 *
 * Return: number of bytes.
 */
char *_strpbrk(char *s, char *accept);

/**
 * print_chessboard - print chessboard.
 * @a: pointer to chess board.
 *
 * Return: number of bytes.
 */
void print_chessboard(char (*a)[8]);

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix of integers.
 * @a: pointer to array.
 * @size: size
 *
 * Return: void.
 */
void print_diagsums(int *a, int size);

/**
 * _strstr - function that locates a substring.
 * @haystack: pointer to string.
 * @needle: pointer to substring.
 *
 * Return: pointer to substring.
 */
char *_strstr(char *haystack, char *needle);

/**
* set_string - function that locates a substring.
* @s: pointer to pointer to string.
* @to: pointer to string.
*
* Return: void.
*/
void set_string(char **s, char *to);

#endif
