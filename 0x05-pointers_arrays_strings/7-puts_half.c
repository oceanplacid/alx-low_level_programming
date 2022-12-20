#include "main.h"
/**
 * puts_half - prints half of a string
 * Return: void
 * @str: parameter to the string
 */
void puts_half(char *str)
{
	int count;
	int i;

	count = 0;
	while (*str)
	{
		count++;
		str++;
	}
	for (i = 0; i < count; i++)
	{
		str--;
	}
	i = (count % 2 == 0) ? count / 2 : (count + 1) / 2;
	for (; i < count; i++)
	{
		_putchar(str[i]);
	}
	_putchar ('\n');
}
