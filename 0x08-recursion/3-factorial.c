#include "main.h"

/**
 * factorial - finds factorial of a number
 * @n: the number we want to find fact of.
 * Return: 1 if n =0 or 0 whan n < 0.
 */

int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
