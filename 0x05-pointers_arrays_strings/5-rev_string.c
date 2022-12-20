#include "main.h"
/**
 * rev_string - reverses a string
 * Return: void
 * @s: parameter to the function
 */
void rev_string(char *s)
{
	int count;
	char last;
	int i;

	while (*s)
	{
		s++;
		count++;
	}
	for (i = 0; i < (count / 2); i++)
	{
		int last_count;

		last_count = count - 1;

		last = s[last_count - i];
		s[last_count - i] = s[i];
		s[i] = last;
	}
}
