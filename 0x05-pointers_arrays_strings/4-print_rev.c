#include "main.h"
/**
 * print_rev - prints string in reverse
 * Return: void
 * @s: parameter passed to the function
 */
void print_rev(char *s)
{
	int count = 0;

	while (*s)
	{
		s++;
		count++;
	}
	while (count)
	{
		s--;
		_putchar(*s);
	}
	_putchar('\n');
}
