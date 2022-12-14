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
	putchar (n%10 + '0');	
	
	return (n%10);	
}
