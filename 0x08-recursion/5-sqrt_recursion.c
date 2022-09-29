#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: input number
 * Return: natural square root.
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (0);
	}
	if (n == 1)
	{
		return (1);
	}
	else
	{
		return (power_fxn(n, 1));
	}
}

/**
 * power_fxn - returns the natural square root of a number.
 * @n: input number.
 * @i: iterator
 * Return: natural square root.
 */

int power_fxn(int n, int i)
{
	if (n == (i * i))
	{
		return (i);
	}
	else if (n > (i * i))
	{
		return (power_fxn(n, i + 1));
	}
	else
	{
		return (-1);
	}
}
