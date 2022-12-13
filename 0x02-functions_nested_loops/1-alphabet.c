#include <stdio.h>
#include "main.h"
/**
 * Description: prints alphabets in lower cases
 *
 * main - check the code
 *
 * Return: Always 0
 */
void print_alphabet()
{
	for (char letters = 'a'; letters <= 'z'; letters++)
	{
		putchar(letters);
	}
	putchar('\n');
}

int main(void)
{
	print_alphabet();
	return (0);
}
