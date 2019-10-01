#include "holberton.h"
#include <stdio.h>
/**
 * print_array - Entry point
 * Description: Function that return a number of an array
 * @a: parametre to check
 * @n: parametre to check
 * Return: always a void
 */
void print_array(int *a, int n)
{

	int i = 0;

	for ( ; i < n ; i++)
	{
		printf("%i", a[i]);
		if (i < n - 1)
			printf(", ");
	}
	printf("\n");
}
