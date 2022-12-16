#include <stdio.h>
#include "main.h"
/**
 * fizz_buzz - prints fizz for multiples of 3, buzz for multiples of 5
 * Return: void
 */
void fizz_buzz(void)
{
	int num;
	int count;
	char *fizz = "Fizz";
	char *buzz = "Buzz";
	char *fbuzz = "FizzBuzz";	

	for (num = 1; num <= 100; num++)
	{
		if (num % 15 == 0)
		{
			for (count = 0; count < sizeof(fbuzz); count++)
			{
				putchar(fizz[count]);
			}
			putchar(' ');
		}
		else if (num % 5 == 0)
		{
			for (count = 0; count < sizeof(buzz); count++)
			{
				putchar(buzz[count]);
			}
			putchar(' ');
		}
		else if (num % 3 == 0)
		{
			for (count = 0; count < sizeof(fizz); count++)
			{
				putchar(fizz[count]);
			}
			putchar(' ');
		}
		else
		{
			putchar('0' + num);
		}
		putchar(' ');
	}
	putchar('\n');
}
int main(void)
{
	fizz_buzz();
	return (0);
}
