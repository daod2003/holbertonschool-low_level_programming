#include "variadic_functions.h"
/**
 * sum_them_all - Entry point
 * @n: parametre to check
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list valist;
	double sum = 0.0;
	unsigned int i;

	if (n == 0)
		return (0);

	va_start(valist, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(valist, int);
	}
	va_end(valist);
	return (sum);
}
