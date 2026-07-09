#include <stdio.h>
/**
 * main - prints first chars of base 16
 * Description: num counts to 9
 * let counts to F
 * Return: 0
 */

int main(void)
{
	char num;
	char let;

	num = '0';
	let = 'A';
	while (num <= '9')
	{
		putchar(num);
		num = num + 1;
	}
	while (let <= 'F')
	{
		putchar(let);
		let = let + 1;
	}
	putchar('\n');
	return (0);
}
