#include <stdio.h>
/**
 *
 *  Description: This program pints alphabets in lower cases exept 'e' and 'q'
 *
 */
int main(void)
{
	char alpha = 'a';

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		if ((alpha == 'e') | (alpha == 'q'))
		{
			alpha++;
		}
		putchar (alpha);
	}
	putchar('\n');
	/* Return - returns 0 when successful */
	return (0);

}
