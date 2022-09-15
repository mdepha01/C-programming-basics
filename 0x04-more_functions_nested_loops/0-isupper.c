#include "main.h"

/**
 * _isupper - checks if a character is uppercase or not.
 * @c: is a character passed as parameter to be checked.
 * Return: 1 if c is uppercase or else return 0;
 */

int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
