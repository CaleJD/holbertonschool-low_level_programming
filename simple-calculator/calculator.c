#include <stdio.h>

/**
* multiply - Multiply a and b
* @a: First number
* @b: Second number
* Return: The multiplied outcome
*/
int multiply(int a, int b)
{
	int result;

	result = (a * b);
	return (result);
}

/**
* divide - Divide b from a
* @a: First number
* @b: Second number
* Return: The divided outcome
*/
int divide(int a, int b)
{
	int result;

	result = (a / b);
	return (result);
}

/**
* subtract - Subtract b from a
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
* addition - Adds a and b together
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
*
* Return: 0
*/
int subtract(int a, int b);
int addition(int a, int b);
int multiply(int a, int b);
int divide(int a, int b);
int main(void)
{
	int choice;
	int a;
	int b;
	int result;

	choice = -1;
	while (choice != 0)
	{
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
		if (choice == 3)
		{
			printf("First number: ");
			scanf("%d", &a);
			printf("Second number: ");
			scanf("%d", &b);
			result = multiply(a, b);
			printf("Result: %d\n", result);
		}
		if (choice == 4)
		{
			printf("First number: ");
			scanf("%d", &a);
			printf("Second number: ");
			scanf("%d", &b);
			if (b == 0)
			{
				printf("Error: division by zero\n");
			}
			else
			{
				result = divide(a, b);
				printf("Result: %d\n", result);
			}
		}
	}
	if (choice == 0)
	{
		printf("Bye!\n");
	}
	return (0);
}
