#include "main.h"

/**
 * swap_int - a function that swaps the values of two integers
 * @a: input an integer
 * @b: input an integer
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;

}
