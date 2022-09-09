#include<stdio.h>

/**
 * main -Entry point
 * printing base 10 numbers using only putchar 2 times
 * Return: Always 0 (Success)
*/

int main(void)
{
	int i;
	char c =  '0';

	for (i = 0; i < 10; i++)
	{
		putchar(i + c);
	}
	putchar('\n');
	return (0);
}
