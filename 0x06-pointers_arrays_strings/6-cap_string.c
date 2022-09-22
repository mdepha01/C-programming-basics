#include "main.h"

/**
 * *cap_string - puts capital letters on every string letter
 * @s: pointer to the string
 * Return: pointer to string
 */


char *cap_string(char *s)
{
	char *charz = " \t\n,;.!?\"(){}";
	int i = 0, j = 0, capital = 1, k = 0;

	for (; s[i]; i++)
	{
		for (; j < i; j++)
		{
			if (s[j] >= 'A' && s[j] <= 'Z')
			{
				capital = 0;
			}
			if ((s[j] >= 'a' && s[j] <= 'z') && capital == 1)
			{
				s[j] = ((s[j] - 'a') + 'A');
				capital = 0;
			}
			for (k = 0; charz[k]; k++)
			{
				if (s[j] == charz[k])
				{
					capital = 1;
					if (!(s[j + 1] <= 'z' && s[j + 1] >= 'a'))
					{
						capital = 0;
					}
				}
			}
		}
	}
	return (s);
}
