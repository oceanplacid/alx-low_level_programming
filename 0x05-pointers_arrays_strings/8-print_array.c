#include "main.h"
#include <stdio.h>
/**
 * print_array - prints a certain number of integers followed by new line
 * Return: void
 * @a: first parameter
 * @n: second parameter
 */
void print_array(int *a, int n)
{
	int count;

	count = 0;
	while (count < n)
	{
		printf("%d", a[count]);
		if (count != (n - 1))
		{
			printf(", ");
		}
		count++;
	}
	putchar('\n');
}
