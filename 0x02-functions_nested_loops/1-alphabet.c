#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - Prints alphabts from a to z
 * Return: void or nothing
 */

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
