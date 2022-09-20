#include "main.h"

/**
 * puts2 - func that prints 1 char/2 of a string.
 * @str: pointer passed as argument
 * Return: void / nothing
 */
void puts2(char *str)
{
	int i;
	char c;

	for (i = 0; str[i] != 0; i++)
	{
		if (i % 2 == 0)
		{
			c = str[i];
			_putchar(c);
		}
	}
	_putchar('\n');
}
