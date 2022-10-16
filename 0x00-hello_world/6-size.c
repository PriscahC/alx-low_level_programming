#include <stdio.h>

/**
 * main - entry point of the code
 * Description - prints size of types on the computer it is run on
 * Return: - program returns zero
 */

int main(void)
{
	printf("size of a char: %d\n", sizeof(char));
	printf("size of a long int: %d\n", sizeof(long int));
	printf("sizeof a long long int: %d\n", sizeof(long long int));
	printf("size of float: %d", sizeof(float));
	return (0);
}
