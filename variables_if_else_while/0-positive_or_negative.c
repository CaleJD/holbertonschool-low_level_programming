#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
* main - RNG calculator
* Description: tells if rng is higher or lower or 0
* Return: 0
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
		printf("is negative\n");
	else if (n == 0)
		printf("is zero\n");
	else
		printf("is positive\n");
	return (0);
}
