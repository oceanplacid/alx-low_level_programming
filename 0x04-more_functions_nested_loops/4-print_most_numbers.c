#include "main.h"

void print_most_numbers(void)
{
	int num;

	num = 0;

	while (num < 10)
	{
		if (num == 2 || num == 4)
		{
			continue;
		}
		else
		{
			_putchar (num);
			num++;
		}
	}
	_putchar ('\n');
}
