#include "3-calc.h"

/**
 * main - a calculator function
 * @argc: checks number of arguments
 * @argv: arguments given from the user
 * Return: 0 if success, -1 if fail
 */
int main(int argc, char **argv)
{
	int a;
	int b;
	op_t funcptr;
	int res;

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	if ((strcmp(argv[2], "/") == 0 || strcmp(argv[2], "%") == 0)
		&& b == 0)
	{
		printf("Error\n");
		return (100);
	}
	funcptr.f = get_op_func(argv[2]);
	if (funcptr.f == NULL)
	{
		printf("Error\n");
		return (99);
	}
	res = funcptr.f(a, b);
	printf("%d\n", res);
	return (0);
}
