#include <stdio.h>

/**
*main- prints alphabets in lower case
*Return: returns 0
*/

int main(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
		if (x == 'e' || x == 'q')
		continue;
		putchar (x);
	}
	{
		putchar ('\n');
	}
	return (0);
}
