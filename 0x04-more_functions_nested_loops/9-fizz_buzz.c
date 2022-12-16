#include <stdio.h>
#include "main.h"
/**
 * fizz_buzz - prints fizz for multiples of 3, buzz for multiples of 5
 * Return: void
 */
void fizz_buzz(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if (num % 15 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (num % 5 == 0)
		{
			printf("Buzz ");
		}
		else if (num % 3 == 0)
		{
			printf("Fizz ");
		}
		else
		{
			printf("%d ", num);
		}
	}
	putchar('\n');
}
