#include <stdio.h>

/**
*main- program enrty point
*Return: This returns 0
*/

int main(void)
{
	int n;

	for (n = '0'; n < '10'; n++)
		if (n < '9')
		{
			putchar(n + '0');
			putchar(',');
			putchar(' ');
		}
	{
		putchar ('\n');
	}
	return (0);
}
