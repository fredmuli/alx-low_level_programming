#include "main.h"

/**
 * reverse_array - a function that reverse an array.
 * @a: input an array
 * @n: number of elements of array
 * Return: Always 0 (Success)
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int aux;

	while (i < n--)
	{
		aux = a[i];
		a[i++] = a[n];
		a[n] = aux;
	}
}
