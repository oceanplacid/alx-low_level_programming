#include <stdio.h>
/**
 *
 *  *Description: This program pints alphabets in lower case in reverse order
 *
 *
 *
 */
int main(void)
{
	char alpha = 'z';
	
	while (alpha >= 'a')
	{
		putchar (alpha);
		alpha--;
	}
	putchar('\n');
	/* Return - returns 0 when successful */
	return (0);
}
