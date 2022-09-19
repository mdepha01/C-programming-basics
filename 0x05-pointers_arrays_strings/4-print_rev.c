#include "main.h"

/**
 * print_rev - prints a string in reverse order
 * @str: string pointer passed as argument
 * Return: void / nothing
 */

void print_rev(char *str)
{
	char *address = str;
	char *address2;
	int length = 0;

	while (*str != '\0')
	{
		length++;
		str++;
	}
	address2 = address + length - 1;
	while (address <= address2)
	{
		_putchar(*address2);
		address2--;
	}
	_putchar('\n');
}
