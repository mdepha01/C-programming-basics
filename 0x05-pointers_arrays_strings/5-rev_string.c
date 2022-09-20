#include "main.h"

/**
 * rev_string - prints a string in reverse
 * @s: an array pointer passed as argument
 * Return: void / nothing
 */


void rev_string(char *s)
{
	int a, b;
	char c;

	for (a = '\0'; s[a] != 0; a++)
	{
	}
	b = 0;
	for (a = a - 1; b < a; b++)
	{
		c = s[a];
		s[a] = s[b];
		s[b] = c;
		a--;
	}
}
