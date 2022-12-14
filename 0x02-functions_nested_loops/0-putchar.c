#include <stdio.h>
/**
 * Description: this program prints _putchar
 */

int main(void)
{
	int count;
	char string[] = "_putchar";

	for (count = 0; count < sizeof(string)-1; count++)
	{
		putchar (string[count]);
	}
	putchar ('\n');

	return (0);
}

