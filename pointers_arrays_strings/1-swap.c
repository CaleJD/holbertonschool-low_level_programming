#include "main.h"

/**
* swap_int - swaps the value of a and b
* @a: value to swap with b
* @b: value to swap with a
*/
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
