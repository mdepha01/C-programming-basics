#include "main.h"

/**
 * str_concat - function that concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: Always 0.
 */

char *str_concat(char *s1, char *s2)
{
	int i, j, k;
	char *array;

	k = 0;
	array = malloc(sizeof(*s1 + *s2));
	if (array == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (s1[i] != '\0')
	{
		array[k] = s1[i];
		i++;
		k++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		array[k] = s2[j];
		j++;
		k++;
	}
	return (array);
	free(array);
}
