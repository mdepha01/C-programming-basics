#include "main.h"

/**
 * *_strncat - performs the function of strncat()
 * @dest:  pointer pointing to destination array
 * @src: pointer pointing to source array
 * @n: size of source array that need to be appended
 * Return: pointer to destination
 */


char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	return (dest);
}
