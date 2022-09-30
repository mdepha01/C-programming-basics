#include "main.h"

/**
 * *_strcat - concatinate two strings
 * @dest: destnation pointer.
 * @src: pointer pointing to appended string
 * Return: pointer
 */

char *_strcat(char *dest, char *src)
{
	int lendest = 0, i = 0;
	char *Tracker = dest;

	while (*Tracker != '\0')
	{
		lendest++;
		Tracker++;
	}
	while (src[i] != '\0')
	{
		dest[lendest + i] = src[i];
		i++;
	}
	return (dest);
}
