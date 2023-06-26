/**
* swap_int - print_number.
* @a: pointer to int
* @b: pointer to int
*
* Return: void.
*/

void swap_int(int *a, int *b)
{
	int t;

	t = *a;
	*a = *b;
	*b = t;
}
