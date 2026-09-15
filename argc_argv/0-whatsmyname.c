#include <stdio.h>

/**
 * main - prints the name of the file
 * @argc: number of args
 * @argv: list of args
 */
int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s", argv[0]);
	return 0;
}