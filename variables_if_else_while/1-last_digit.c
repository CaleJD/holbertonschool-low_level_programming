#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - RNG Calculator
 * Description: Tells is last digit is
 * less than 5
 * Return: 0
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %d", n);
	if (n % 10 > 5)
		printf("and is greater than 5");
	if (n % 10 == 0)
		printf("and is 0");
	if (n % 10 < 6 && n % 10 != 0)
		printf("and is less than 6 and not 0");
	return (0);
}
