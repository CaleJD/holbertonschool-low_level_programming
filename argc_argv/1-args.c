#include <stdio.h>

/**
 * main - prints number of args
 * @argc: number of args
 * @argv: list of args
 * Return: 0
 */
int main(int argc, char *argv[])
{
	argc--;
	printf("%d\n", argc);
	(void) argv;
	return (0);
}
