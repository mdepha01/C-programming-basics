#include <stdio.h>

/**
 * main - Entry point
 * printing alphabets except q and e.
 * using only 2 putchar function
 * Return: 0 Always (Success)
*/

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c == 'e' || c == 'q')
		{
			continue;
		}
		putchar(c);
	}
	putchar('\n');
	return (0);
}
