#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * _isalpha - Checks is a parameter passed is a letter
 * @c: is a parameter passed as an argument from main
 * Return: 1 if c is a letter, or else return 0
 */

int _isalpha(int c)
{
	if (islower(c) || isupper(c) || isalpha(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
