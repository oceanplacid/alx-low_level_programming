#include "main.h"

void more_numbers(void)
{
	int num;
	int count;

	count = 1;
	num = 0;

	start:
		while (num <= 14)
		{
			_putchar(num);
			num++;
		}
		_putchar('\n');
		count++;
		while (count <= 10)
		{
			goto start;
		}
	_putchar('\n');

}
