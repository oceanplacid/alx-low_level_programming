#include "main.h"
/**
 * swap_int - swaps the values of the parameters passed to the function
 * Return: void
 * @a: first parameter
 * @b: second parameter
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
