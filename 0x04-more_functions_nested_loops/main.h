#ifndef MAIN_H
#define MAIN_H

int _putchar(char c);
/**
* _isupper - a function that checks for uppercase character.
* @c: the char to check
*
* Return: 1 if true else 0.
*/
int _isupper(int c);

/**
* _isupper - a function that checks for a digit (0 through 9).
* @c: the char to check
*
* Return: 1 if true else 0.
*/
int _isdigit(int c);

/**
* mul - a function that multiplies two integers.
* @a: num1
* @b: num2
*
* Return: 1 if true else 0.
*/
int mul(int a, int b);

/**
* print_numbers - Write a function that prints the numbers, from 0 to 9.
*
* Return: void.
*/
void print_numbers(void);

/**
* print_most_numbers - prints the numbers, from 0 to 9 except 2 and 4.
*
* Return: void.
*/
void print_most_numbers(void);

/**
* more_numbers - prints 10 times the numbers, from 0 to 14
*
* Return: void.
*/
void more_numbers(void);

/**
* print_line -  a function that draws a straight line in the terminal.
* @n: num of chars
*
* Return: void.
*/
void print_line(int n);

/**
* print_diagonal -   a function that draws a diagonal line on the terminal.
* @n: num of chars
*
* Return: void.
*/
void print_diagonal(int n);

/**
* print_square -   a function that draws a diagonal line on the terminal.
* @size: dim of square
*
* Return: void.
*/

void print_square(int size);

#endif
