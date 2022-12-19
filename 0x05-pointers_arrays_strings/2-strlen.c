#include "main.h"
/**
 * _strlen - returns the length of a string
 * Return: int
 * @s: parameter passed to the function
 */
int _strlen(char *s)
{
	int count;

	count = 0;
	while (s[count] != '\0')
	{
		count++;
	}
	return (count);
}
