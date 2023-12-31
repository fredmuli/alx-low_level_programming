#include "main.h"

/**
 * _strncpy - a function that copies a string
 * @dest: input a string
 * @src: input a string
 * @n: input an integer
 * Return: Always 0 (Success)
 */

char *_strncpy(char *dest, char *src, int n)
{
	int srclen = 0, i = 0;
	char *temp = dest, *start = src;

	while (*src)
	{
		srclen++;
		src++;
	}

	srclen++;

	if (n > srclen)
		n = srclen;

	src = start;

	for (; i < n; i++)
		*dest++ = *src++;

	return (temp);
}
