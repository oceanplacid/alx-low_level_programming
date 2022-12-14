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
	
	for (x = n; x <= 98; x++)
	{
		putchar('\0' + x);
	}
	putchar('\n');
}
/**int main(void)
 *{
 *	print_to_98(5);
 *	return (0);
 *}
 */
