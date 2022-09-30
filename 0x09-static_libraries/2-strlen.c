#include "main.h"

/**
 * _strlen - returns string length
 * @s: string pointer passed as argument
 * Return: length is string
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
