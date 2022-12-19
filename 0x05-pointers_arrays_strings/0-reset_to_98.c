#include "main.h"
/**
 * reset_to_98 - updates the value of the pointer paramenter
 * Return: void
 * @n: parameter for the function
 */
void reset_to_98(int *n)
{
	unsigned long int i;
	*n = 98;

	for (i = 0; i < sizeof(n); i++)
	{
		_putchar('0' + n[i]);
	}
	_putchar('\n');
}
