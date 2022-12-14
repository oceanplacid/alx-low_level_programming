#include <stdio.h>
#include "main.h"
/**
 * Description: prints 10x alphabets in lower cases
 *
 * main - check the code
 *
 * Return: Always 0
 */
void print_alphabet_x10()
{
	int count = 1;
	char letters;

	start:
		for (letters = 'a'; letters <= 'z'; letters++)
		{	
			putchar(letters);
		}
		putchar('\n');
		count++;
		if (count <= 10)
		{
			goto start;
		}
}

/**int main(void)
 *{
 *	print_alphabet_x10();
 *	return (0);
 *}
 */
