#include "main.h"

/**
 * rev_string - prints a string in reverse
 * @s: an array pointer passed as argument
 * Return: void / nothing
 */


void rev_string(char *s)
{
	char Temp;
	char *address1 = s;
	char *address2 = address1 + 8;

	while (address1 != address2)
	{
		Temp = *address1;
		*address1 = *address2;
		*address2 = Temp;
		address1++;
		address2--;
	}
}
