#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - prints added value of ints given
 * @argc: number of args
 * @argv: list of args
 * Return: 1 if fail 0 if success
 */
int main(int argc, char *argv[])
{
	int res = 0;
	int i = 1;
	int j;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}
		res += atoi(argv[i]);
		i++;
	}
	printf("%d\n", res);
	return (0);
}
