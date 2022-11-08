#include <stdio.h>

/**
 * main - entry point of code
 * description - prints arguments it receives
 * @argc: counts arguments
 * @argv: contains arguments
 * Return: returns zero
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
