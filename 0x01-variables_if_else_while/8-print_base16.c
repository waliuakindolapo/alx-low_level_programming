#include <stdio.h>

/**
*main- start of the program
*Return: return 0
*/

int main(void)
{
	int i;
	char hexvalues[] = "0123456789adcdef";

	for (i = 0; i < 16; i++)
	{
		putchar (hexvalues[i]);
	}
	{
		putchar ('\n');
	}
	return (0);
}
