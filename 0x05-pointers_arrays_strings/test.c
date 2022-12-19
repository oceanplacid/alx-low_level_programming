#include "main.h"
#include <stdio.h>
/**
 * reset_to_98 - updates the value of the pointer paramenter
 * Return: void
 */
void reset_to_98(int *n)
{
	*n = 98;
	int i;

	for (i = 0; i < sizeof(n); i++)
	{
		_putchar(n[i]);
	}
	_putchar('\n');
	
}
int main(void)
{
	int a;

	a = 402;
	reset_to_98(&a);
	printf(a);
	return (0);
}
