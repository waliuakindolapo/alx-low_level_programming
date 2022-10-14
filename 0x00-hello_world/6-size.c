#include <stdio.h>

/**
*main- This display the size of various types on the computer
*Return: This returns 0
*/

int main(void)
{
	printf("Size of a char: %c\n", sizeof(char));
	printf("Size of an int: %d\n", sizeof(int));
	printf("Size of a long int: %1d\n", sizeof(long int));
	printf("Size of a long long int: %11d\n", sizeof(long long int));
	printf("Size of a float: %f", sizeof(float));
	return (0);
}
