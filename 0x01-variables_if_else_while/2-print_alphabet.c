#include<stdio.h>
#include<stdlib.h>

/**
 * main - Entry point
 * printing letters of the alphabet using putchar
 * Return:0 Always (Success)
*/

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
