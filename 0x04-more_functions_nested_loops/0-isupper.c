#include <stdio.h>
#include "main.h"
/**
 * _isupper - checks if an input is an upper case or not
 * Return: 1 if it is upper case, and 0 if it is not
 * @c: parameter passed to the _issupper function
 */
int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
