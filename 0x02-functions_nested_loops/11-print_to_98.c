#include <stdio.h>
#include "main.h"
/**
 * Description: prints natural numbers to 98
 *
 * main - checks the code
 *
 * Return - Always 0
 */

void print_to_98(int n)
{
	int x;
	
	if (n >= 0)
	{
		for (x = n; x <= 98; x++)
		putchar(x);
	}
}
/**int main(void)
 *{
 *	print_to_98(5);
 *	return (0);
 *}
 */
