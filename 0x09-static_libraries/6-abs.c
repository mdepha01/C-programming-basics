#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * _abs - finds the absolute value of an integer
 * @n: parameter passed as an argument
 * Return: an Absolute value
 */

int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		return (-1 * n);
	}

}
