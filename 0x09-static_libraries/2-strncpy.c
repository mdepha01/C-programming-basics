#include "main.h"

/**
 * _strncpy - copies n character to destination
 * @dest: pointer pointing to destination array
 * @src: pointer pointing to source array
 * @n: numberof characters copied from src to dest
 * Return: pinter to dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (i != n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
		j++;
	}
	while (j != n)
	{
		dest[j++] = '\0';
	}
	return (dest);
}
