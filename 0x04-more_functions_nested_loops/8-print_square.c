#include "main.h"

void print_square(int size)
{
	int count;
	int rows;

	rows = 0;
	
	start:

		for (count = 0; count < size; count++)
		{
			_putchar('#');
		}
		_putchar('\n');
		rows++;
		while (rows < size)
		{
			goto start;
		}	
}
