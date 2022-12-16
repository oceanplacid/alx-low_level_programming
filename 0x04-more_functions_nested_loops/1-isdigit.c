#include <stdio.h>
#include "main.h"
/**
 * _isdigit - checks if the input is a digit
 *
 * Return: 1 if input is digit and 0 if input is not a digit
 * @c: parameter passed to the isdigit funtion
 */
int _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	
}
