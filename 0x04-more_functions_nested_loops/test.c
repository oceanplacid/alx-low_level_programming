#include <stdio.h>
#include "main.h"
/**
 * print_line - prints a straight line a giving number of times
 * Return: void
 * @n: parameter for print_line
 */
void print_line(int n)
{
	int num;

	num = 0;

	while (num < n)
	{
		_putchar('_');
		num++;
	}
	_putchar('\n');
}
int main(void)
{
	print_line(10);
	return (0);
}
