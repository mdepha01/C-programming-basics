#include "main.h"


/**
 * create_array - creates an array of size n
 * @c: char passed as argument
 * @size: size of array to be created
 * Return: Null if empty or pointer to
 * new array
 */

char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i = 0;

	p = malloc(sizeof(char) * size);
	if (size == 0)
	{
		return (NULL);
	}
	else if (p == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < size ; i++)
		{
			p[i] = c;
		}
	}
	return (p);
}
