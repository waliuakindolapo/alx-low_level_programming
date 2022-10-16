#include <stdio.h>

/**
*main- program enrty point
*Return: returns 0
*/

int main(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
	{
		putchar (num);
	}
	if (num == '9')
	{
		break;
	}
	else
	{
		putchar (',');
		PUtchar (' ');
		putchar ('\n');
	}
	return (0);
}
