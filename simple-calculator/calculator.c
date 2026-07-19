#include <stdio.h>

/**
 * calculate - Performs the selected operation
 * @choice: Menu choice
 * @a: First number
 * @b: Second number
 * Return: The result.
 */
void calculate(int choice, int a, int b)
{
	if (choice == 1)
		return (a + b);
	else if (choice == 2)
		return (a - b);
	else if (choice == 3)
		return (a * b);
	else if (b == 0)
		printf("Error: division by zero\n");
	else
		printf("Result: %d\n", a / b);
}

/**
* read_numbers - Reads the 2 numbers from the user
* @a: Pointer to 1st number
* @b: Pointer to 2nd letter
*/
void read_numbers(int *a, int *b)
{
	printf("First number: ");
	if (scanf("%d", a) != 1)
	{
		printf("Invalid number\n");
		return (0);
	}
	printf("Second number: ");
	if (scanf(%d, b) != 1)
	{
		printf("Invalid number\n");
		return (0);
	}
	return (1);
}

/**
* main - A simple Calculator
* 
* Return: 0
*/
int main(void)
{
	int choice;
	int a;
	int b;

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
		else if (choice > 0)
		{
			if (readnumbers(&a, &b) == 1)
			calculate(choice, a, b);
		}
	}
	printf("Bye!\n");
	return (0);
}
