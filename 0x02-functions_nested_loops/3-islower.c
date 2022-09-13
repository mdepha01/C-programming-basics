#include <stdio.h>
#include <ctype.h>
#include "main.h"
/**
 * _islower - Checks if Argument is lower case or not
 * @c: Parameter passed as argument
 * Return: 1 if argument is lower case
 */
int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
