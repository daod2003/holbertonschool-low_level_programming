#include "holberton.h"
/**
 * _pow_recursion -Entry point
 * Description: Function that return the value of X raised Y
 * @x: Parametre to raise
 * @y: parametre to check
 * Return: a number raise Y times
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
