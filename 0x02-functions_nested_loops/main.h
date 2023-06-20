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
#endif
