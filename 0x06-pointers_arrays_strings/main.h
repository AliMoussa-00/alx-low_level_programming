#ifndef MAIN_H
#define MAIN_H

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c);

/**
 * _strcat -  a function that concatenates two strings.
 * @dest: pointer to destination string
 * @src: pointer to source string
 *
 * Return: pointer to char.
 **/
char *_strcat(char *dest, char *src);
/**
 * _strncat -  a function that concatenates two strings.
 * @dest: pointer to destination string
 * @src: pointer to source string
 * @n: number of bytes from src
 *
 * Return: pointer to char.
 */
char *_strncat(char *dest, char *src, int n);

/**
 * _strncpy -  a function that copies a string.
 * @dest: pointer to destination string
 * @src: pointer to source string
 * @n: number of bytes from src
 *
 * Return: pointer to char.
 */
char *_strncpy(char *dest, char *src, int n);

/**
 * _strcmp -  a function that compares two strings.
 * @s1: pointer to string 1
 * @s2: pointer to string 2
 *
 * Return: pointer to char.
 */
int _strcmp(char *s1, char *s2);

#include "main.h"
/**
 * reverse_array -  a function that compares two strings.
 * @a: pointer to array int
 * @n: length of array
 *
 * Return: void.
 */
void reverse_array(int *a, int n);
/**
 * string_toupper -  a function that changes lower to uppercase.
 * @ : pointer to char
 *
 * Return: pointer to char.
 */
char *string_toupper(char *);
/**
 * cap_string -  a function that capitalizes all words of string.
 * @: pointer to char
 *
 * Return: pointer to char.
 */
char *cap_string(char *);
/**
 * leet -  a function that encode a string into 1337.
 * @s: pointer to char
 *
 * Return: pointer to char.
 */
char *leet(char *);

/**
 * rot13 -  a function that encode a string using rot13.
 * @s: pointer to char
 *
 * Return: pointer to char.
 */
char *rot13(char *);

/**
 * print_number -  a function that encode a string using rot13.
 * @n: number.
 *
 * Return: void.
 */
void print_number(int n);


#endif
