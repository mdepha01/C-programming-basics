#include "main.h"

/**
 * _isdigit - checks if a character is uppercase or not.
 * @c: is a character passed as parameter to be checked.
 * Return: 1 if c is uppercase or else return 0;
 */

int _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
