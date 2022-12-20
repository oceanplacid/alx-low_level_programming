#include "main.h"
/**
 * puts2 - prints every other character of a string
 * Return: void
 * @str: parameter to the function
 */
void puts2(char *str)
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
	for (i = 0; i < count; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
