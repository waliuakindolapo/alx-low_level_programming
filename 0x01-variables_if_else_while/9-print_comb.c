#include <stdio.h>

/**
*main- program enrty point
*Return: This returns 0
*/

int main(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
	{
		putchar (num + '0');
	}
	{
		putchar (',');
	}
	for (num <= 9)
	{
		putchar (' ');
	}
	{
		putchar ('\n');
	}
	return (0);
}
