#include "holberton.h"
/**
 * print_alphabet_x10 - entry point
 *
 * Description: Prints alphabet with _putchar
 *
 * Return: always 0.
 */
void print_alphabet_x10(void)
{
	int a = 'a';
	int b = 'z';
	int c = 0;

	for ( ; c < 10 ; c++)
	{
		for ( ; a <= b ; a++)
			_putchar(a);
	a = 'a';
	_putchar('\n');
	}
}
