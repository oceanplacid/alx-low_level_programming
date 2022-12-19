#include "main.h"
/**
 * reset_to_98 - updates the value of the pointer paramenter
 * Return: void
 * @n: parameter for the function
 */
void reset_to_98(int *n)
{
	*n = 98;
	long unsigned int i;

	for (i = 0; i < sizeof(n); i++)
	{
		_putchar(n[i]);
	}
	_putchar('\n');
}
