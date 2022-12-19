#include "main.h"
/**
 * _puts - prints a string to the screen
 * Return: void
 * @str: parameter passed to the function
 */
void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
