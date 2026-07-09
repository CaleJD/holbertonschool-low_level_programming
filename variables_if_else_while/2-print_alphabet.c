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

	letter = 'a';
	while (letter <= 'z')
	{
		putchar(letter);
		letter = letter + 1;
	}
	putchar('\n');
	return (0);
}
