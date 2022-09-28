#include "main.h"

/**
 * _puts_recursion - prints string recursively
 * @s: pointer to string passed as arguments
 * Return: void / nothing
 */


void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
