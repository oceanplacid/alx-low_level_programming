#include <stdio.h>
/**
 * Description: this program prints _putchar
 */

int main(void)
{
	char string[] = "_putchar";

	for (int count = 0; count < sizeof(string)-1; count++)
	{
		putchar (string[count]);
	}
	putchar ('\n');

	return (0);
}

