#include <stdio.h>
/**
 * main - Counts from 0-9
 * Description: prints a number and
 * add +1
 * Return: 0
 */

int main(void)
{
	char num;

	num = '0';
	while (num <= '9')
	{
		putchar(num);
		if (num != '9')
		{
			putchar(',');
			putchar(' ');
		}
		num = num + 1;
	}
	putchar('\n');
	return (0);
}
