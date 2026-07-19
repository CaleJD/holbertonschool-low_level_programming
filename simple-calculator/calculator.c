#include <stdio.h>

/**
* subtract - Subtract a from b
* @a: First number
* @b: Second number
* Return: The subtracted outcome
*/
int subtract(int a, int b)
{
	int result;

	result = (a - b);
	return (result);
}

/**
* addition - Adds 2 numbers together
* @a: First number
* @b: Second number
* Return: sum of a and b
*/
int addition(int a, int b)
{
	int result;

	result = (a + b);
	return (result);
}

/**
* main - A simple Calculator
* @a: First number
* @b: Second number
* Return: 0
*/
int subtract(int a, int b);
int addition(int a, int b);
int main(void)
{
	int choice;
	int a;
	int b;
	int result;

	printf("Simple Calculator\n");
	printf("1) Add\n");
	printf("2) Subtract\n");
	printf("3) Multiply\n");
	printf("4) Divide\n");
	printf("0) Quit\n");
	printf("Choice: ");
	scanf("%d", &choice);
	if (choice < 0 || choice > 4)
	{
		printf("Invalid choice\n");
	}
	if (choice == 1)
	{
		printf("First number: ");
		scanf("%d", &a);
		printf("Second number: ");
		scanf("%d", &b);
		result = addition(a, b);
		printf("Result: %d\n", result);
	}
	if (choice == 2)
	{
		printf("First number: ");
		scanf("%d", &a);
		printf("Second number: ");
		scanf("%d", &b);
		result = subtract(a, b);
		printf("Result: %d\n", result);
	}
	if (choice == 0)
	{
		printf("Bye!\n");
	}
	return (0);
}
