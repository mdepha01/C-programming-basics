#include "main.h"


/**
 * leet - encodes string into 1337
 * @s: pointer to string
 * Return: pointer to encoded string
 */


char *leet(char *s)
{
	int i = 0, arr[5] = {4, 3, 0, 1, 7}, j = 0;
	char encoder[10] = "AaEeOoLlTt";

	for (; s[i]; i++)
	{
		for (j = 0; (s[i] != encoder[j] && j < 10); j++)
			;
		if (s[i] == encoder[j])
		{
			j /= 2;
			s[i] = (arr[j] + '0');
		}
	}
	return (s);
}
