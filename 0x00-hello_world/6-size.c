#include <stdio.h>

/**
 * main - entry point of the code
 * Description - prints size of types on the computer it is run on
 * Return: - program returns zero
 */

int main(void)
{
	int a;
	char b;
	long int c;
	long long int d;
	float f;

	printf("size of a char: %d byte(s)\n", sizeof(b));
	printf("size of an int: %d byte(s)\n", sizeof(a));
	printf("size of a long int: %d byte(s)\n", sizeof(c));
	printf("size of a long long int: %d byte(s)\n", sizeof(d));
	printf("size of a float: %d byte(s)\n", sizeof(f));
	return (0);
}
