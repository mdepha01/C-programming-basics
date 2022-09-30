#include "main.h"

/**
 * _memset - fills memory with constant bytes
 * @s: pointer passed as argument
 * @b: parameter passed as argument
 * @n: parameter for the number of times to print the new values
 * Return: Always 0.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
