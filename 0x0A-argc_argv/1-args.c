#include <stdio.h>

/**
 * main - entry point of code
 * description - prints number of arguments
 * @argv: contains argument arrays
 * @argc: contains command count
 * Return: returns zero
 */

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
