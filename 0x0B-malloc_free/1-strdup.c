#include "main.h"

/**
 * _strdup - copies string
 * @str: argument for array
 * Return: Always 0.
 */

char *_strdup(char *str)
{
	char *array;
	int i = 0, len = 0;

	array = malloc(sizeof(str));
	while (str[i] != '\0')
	{
		len++;
		i++;
	}
	if (array == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (str[i] != '\0')
	{
		array[i] = str[i];
		i++;
	}
	return (array);
}
