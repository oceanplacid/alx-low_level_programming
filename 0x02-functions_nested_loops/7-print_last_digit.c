#include <stdio.h>
#include "main.h"
/**
 * Description: prints the last digit of a number
 *
 * main - check the code
 *
 */
int print_last_digit(int n)
{
	int last_digit;

	last_digit = n % 10;
	putchar (last_digit + '0');	
	
	return (last_digit);	
}
