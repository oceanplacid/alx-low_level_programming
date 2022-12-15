#include <stdio.h>
#include "main.h"

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
