#include <stdio.h>
#include "main.h"

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
int main(void)
{
	char c;

	c = 'a';
	printf("%c: %d\n", c, _isdigit(c));

}
