#include "main.h"

/**
 * _puts - prints the prints the string
 * @str: string pointer passed as argument
 * Return: void
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
