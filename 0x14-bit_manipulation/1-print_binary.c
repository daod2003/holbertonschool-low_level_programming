#include "holberton.h"
/**
 * print_binary - Entry point
 * @n: parameter to check
 * Return: return
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask;
	int i;

	mask = 1UL << 63;
	if (n == 0)
	{
		_putchar('0');
		return;
	}

	for (; mask > 0; mask = mask >> 1)
	{
		if (n & mask)
		{
			_putchar('1');
			i = 1;
		} else
		{
			if (i)
				_putchar('0');
		}
	}
}
