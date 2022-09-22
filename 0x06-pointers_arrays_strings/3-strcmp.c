#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: pointer pointing to the first string
 * @s2: pointer pointing to the second string
 * Return: value depending on the diff
 */



int _strcmp(char *s1, char *s2)
{
	int i = 0, count = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i]  != s2[i] && s1[i] > s2[i])
		{
			count = (s1[i] - s2[i]);
			break;
		}
		else if (s1[i]  != s2[i] && s1[i] < s2[i])
		{
			count = (s1[i] - s2[i]);
			break;
		}
		else
		{
			count = (s1[i] - s2[i]);
			break;
		}
	}
	return (count);
}
