#include <stdio.h>
/**
 *
 * Description: This program pints alphabets in lower cases
 *
 */
int main(void)
{
	char alpha = 'a';
	char upper_alpha = 'A';

	/* while loop prints alphabets in lower case */
	while (alpha <= 'z')
	{
		putchar (alpha);
		alpha++;
	}
	/* while loop prints alphabets in upper case */
	while (upper_alpha <= 'Z')
	{
		putchar (upper_alpha);
		upper_alpha++;
	}
	putchar('\n');
	/* Return - returns 0 when successful*/
	return (0);
}
