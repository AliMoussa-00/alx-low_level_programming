#ifndef HEADER
#define HEADER

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c);

/**
 *print_alphabet - prints out alphabet
 *
 * Return: nothing.
 */
void print_alphabet(void);

/**
 * print_alphabet_x10 - 10 x alphabets
 *
 * Return: void
 */
void print_alphabet_x10(void);

/**
* _islower - check if char is lowercase
* @c: the char to check
*
* Return: 1 is true else return 0
*/
int _islower(int c);

/**
* _isalpha - check if char is alphabetic
* @c: the char to check
*
* Return: 1 is true else return 0
*/
int _isalpha(int c);

/**
* print_sign - check the sign of the num
* @n: the number to check
*
* Return: 1 if positive 0 if num = 0 else -1.
*/
int print_sign(int n);

/**
* _abs - computes the absolute value of an integer
* @int: the number to check
*
* Return: the absolute value.
*/
int _abs(int);

/**
* print_last_digit - prints the last digit of a number
* @int: the number to check
*
* Return: value of the last digit.
*/
int print_last_digit(int);

/**
*  jack_bauer - prints every minute of the day
*
* Return: value of the last digit.
*/
void jack_bauer(void);

/**
* times_table - prints the 9 times table, starting with 0.
*
* Return: value of the last digit.
*/
void times_table(void);

/**
* add - adds two integers and returns the result.
* @int: the number to add
* @int: the second number to add
*
* Return: value of the addition.
*/
int add(int, int);
#endif
