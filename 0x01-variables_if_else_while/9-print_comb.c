#include <stdio.h>

/**
*main- program enrty point
*Return: This returns 0
*/

int main(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
		if (n == '9')
		{
			break;
		}
		else
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar ('\n');
	return (0);
}
