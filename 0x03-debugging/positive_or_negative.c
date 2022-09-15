#include<stdlib.h>
#include "main.h"

/**
 * positive_or_negative - checks if a number is positive or negative
 * Return: 0 Always (Success)
 * @n: Is the parameter passed from the main function
*/

void positive_or_negative(int n)
{
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
}
