#include <stdio.h>
/**
 * main - prints the alphabet
 * Description: The while loops prints current
 * letter and adds +1 to the value
 * Return: 0
 */

int main(void)
{
	char letter;
	char caplet;

	letter = 'a';
	caplet = 'A';
	while (letter <= 'z')
	{
		putchar(letter);
		letter = letter + 1;
	}
	while (caplet <= 'Z')
	{
		putchar(caplet);
		caplet = caplet + 1;
	}
	putchar('\n');
	return (0);
}
