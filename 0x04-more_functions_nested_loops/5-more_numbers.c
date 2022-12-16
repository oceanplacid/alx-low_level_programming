#include "main.h"
/**
 * more_numbers - print a sequence of numbers 10 times
 * Return: void
 */
void more_numbers(void)
{
	int num;
	int count;

	count = 1;

start:
	for (num = 0; num <= 14; num++)
	{
		_putchar('0' + num);
	}
	_putchar('\n');
	count++;
	while (count <= 10)
	{
		goto start;
	}
	_putchar('\n');

}
