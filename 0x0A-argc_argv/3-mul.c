#include <stdio.h>
#include <stdlib.h>

/**
 * main - code entry point
 * @argc: arguments count
 * @argv: arguments vector
 * Return: zero
 */

int main (int argc, char *argv[])
{
	for (i = 0; i < count; i++)
	{
	if (argc > 2)
	{
		int x = atoi(argv[1]);
		int y = atoi(argv[2]);
		printf(x * y);
		printf("\n");
	}
	else
	{
		printf("Error\n");
	}
	return (0);
}
