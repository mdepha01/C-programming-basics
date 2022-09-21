#include "main.h"

/**
 * puts_half - function that prints half of a string.
 * @str: pointer passed as argument
 * Return: void / nothing
 */
void puts_half(char *str)
{
	char *AddressTracker = str;
	int len = 0;
	int i = 0;
	int n = 0;

	while (*AddressTracker != '\0')
	{
		len++;
		AddressTracker++;
	}
	if (len % 2 != 0)
	{
		n = ((len - 1) / 2);
		for (i = n + 1; i < len; i++)
		{
			_putchar(str[i]);
		}
	}
	else if (len % 2 == 0)
	{
		n = (len / 2);
		for (i = n; i < len; i++)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
