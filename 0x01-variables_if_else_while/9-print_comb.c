#include <stdio.h>

/**
 * main - Entry point
 * printing numbers seperated by commas
 * no printf, using only 4 putchar
 * Return: Always 0 (SucceSS)
*/

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
