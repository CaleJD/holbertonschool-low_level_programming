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
* @a: First digit
* @b: Second digit
* Return: 0
*/
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
		if (scanf("%d", &choice) != 1)
		{
			printf("Invalid choice\n");
			return (1);
		}
		if (choice < 0 || choice > 4)
		{
			printf("Invalid choice\n");
		}
		if (choice == 1)
		{
			printf("First number: ");
			if (scanf("%d", &a) != 1)
			{
				printf("Invalid number\n");
				return (1);
			}
			printf("Second number: ");
			if (scanf("%d", &b) != 1)
			{
				printf("Invalid number\n");
				return (1);
			}
			result = addition(a, b);
			printf("Result: %d\n", result);
		}
		if (choice == 2)
		{
			printf("First number: ");
			if (scanf("%d", &a) != 1)
			{
				printf("Invalid number\n");
				return (1);
			}
			printf("Second number: ");
			if (scanf("%d", &b) != 1)
			{
				printf("Invalid number\n");
				return (1);
			}
			result = subtract(a, b);
			printf("Result: %d\n", result);
		}
		if (choice == 3)
		{
			printf("First number: ");
			if (scanf("%d", &a) != 1)
			{
				printf("Invalid choice\n");
				return (1);
			}
			printf("Second number: ");
			if (scanf("%d", &b) != 1)
			{
				printf("Invalid choice\n");
				return (1);
			}
			result = multiply(a, b);
			printf("Result: %d\n", result);
		}
		if (choice == 4)
		{
			printf("First number: ");
			if (scanf("%d", &a) != 1)
			{
				printf("Invalid choice\n");
				return (1);
			}
			printf("Second number: ");
			if (scanf("%d", &b) != 1)
			{
				printf("Invalid choice\n");
				return (1);
			}
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
