#include "holberton.h"
/**
 * print_rev - Entry point
 * Description: Function that print rev
 * @s: parametre
 * Return: always void
 */
void print_rev(char *s)
{
	int c, i;

	for (c = 0; s[c] != 0; c++)
		i++;
	for (c = i - 1 ; c >= 0; c--)
		_putchar(s[c]);
	_putchar('\n');
}
