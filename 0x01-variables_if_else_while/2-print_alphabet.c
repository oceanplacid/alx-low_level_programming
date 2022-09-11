#include <stdio.h>
/**
 *Description: This program pints alphabets in lower cases
 *
 */
int main(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		putchar (alpha);
		alpha++;
	}
	putchar('\n');
	/* Return - returns 0 when successful */
	return (0);
}
