#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the multiplication of 2 given ints
 * @argc: number of args
 * @argv: list of args
 * Return: 1 if fail 0 if success
 */
int main(int argc, char *argv[])
{
	int res = 0;
	int a;
	int b;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	res = (a * b);
	printf("%d\n", res);
	return (0);
}
