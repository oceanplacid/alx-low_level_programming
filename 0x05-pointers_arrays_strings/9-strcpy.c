#include "main.h"
/**
 * _strcpy - copies the string pointed to by src
 * Return: returns a copy of the string
 * @dest: first parameter
 * @src: second parameter
 */
char *_strcpy(char *dest, char *src)
{
	int count;
	int i;

	count = 0;
	while (*src)
	{
		src++;
		count++;
	}
	for (i = 0; i < count; i++)
	{
		src--;
	}
	for (i = 0; i < count; i++)
	{
		dest[i] = *src;
		src++;
	}
	dest[i] = *src;
	return (dest);
}
