#ifndef MAIN_H
#define MAIN_H

int _putchar(char c);

/**
 * _puts_recursion - prints a string.
 * @s: pointer to string.
 *
 * Return: void.
 */
void _puts_recursion(char *s);

/**
 * _puts_recursion - prints a string in reverse.
 * @s: pointer to string.
 *
 * Return: void.
 */
void _puts_rev_recursion(char *s);

/**
 * _strlen_recursion - length of a string.
 * @s: pointer to string.
 *
 * Return: int.
 */
int _strlen_recursion(char *s);

/**
 * factorial - length of a string.
 * @n: number.
 *
 * Return: int.
 */
int factorial(int n);

/**
 * _pow_recursion - cal power of x.
 * @x: number 1.
 * @y: number 2.
 *
 * Return: int.
 */
int _pow_recursion(int x, int y);

/**
 * _sqrt_recursion - cal power of x.
 * @n: number.
 *
 * Return: int.
 */
int _sqrt_recursion(int n);

#include "main.h"
/**
 * is_prime_number - is prime number.
 * @n: number.
 *
 * Return: int.
 */
int is_prime_number(int n);

/**
 * is_palindrome - is string palindrome.
 * @s: string.
 *
 * Return: int.
 */
int is_palindrome(char *s);

#endif
