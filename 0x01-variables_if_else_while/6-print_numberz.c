#include <stdio.h>
/**
 *
 * Description: prints single digits numbers of base 10
 *
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		{
			if ((i == 0) | (i % 10 != 0))
			{
				putchar(i);
			}
		}
	//putchar('\n');
	/* return - returns 0 if the program runs without errors */
	return (0);

}
