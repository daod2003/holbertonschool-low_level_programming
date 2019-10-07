#include "holberton.h"
/**
 * _strspn - Entry point
 * Description: Function that return the length
 * @s: parametre to check
 * @accept: parametre to check
 * Return: unsigned
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0, j = 0;

	for (i = 0 ; s[0] ; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				break;
		}
		if (!accept[j])
			break;
	}
	return (i);
}
