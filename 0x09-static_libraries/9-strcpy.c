#include "main.h"

/**
 * *_strcpy - copies a string
 * @src: points to a string
 * @dest: points to the buffer
 * Return: Always 0.
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (i >= 0)
	{
		dest[i] = src[i];
		if (src[i] == '\0')
		{
			return (dest);
		}
		i++;
	}
	return (dest);
}
