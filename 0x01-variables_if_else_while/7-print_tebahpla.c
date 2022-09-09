#include<stdio.h>

/**
 * main - Entry point
 * printing alphabet in order and in reverse.
 * using only 2 putchar functions
 * Return: Always 0 (Success)
*/

int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
