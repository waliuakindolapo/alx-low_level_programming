#include <stdio.h>

/**
*main- prints alphabets in lower case
*Return: returns 0
*/

int main(void)
{
	char x;
	char j;

	for (x = 'a'; x <= 'z'; x++)
	{
		putchar (x);
	}
	for (j = 'A'; j <= 'Z'; j++)
	{
		putchar (j); 
	}
	{
		putchar ('\n');
	}
	return (0);
}
