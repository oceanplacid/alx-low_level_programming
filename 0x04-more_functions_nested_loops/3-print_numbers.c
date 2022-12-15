#include <stdio.h>
#include "main.h"

int print_numbers(void)
{
	int num;

	num = 0;

	while (num < 10)
	{
		_putchar ('0' + num);
		num++;
	}
	putchar ('\n');
}
