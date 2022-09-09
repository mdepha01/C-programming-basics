#include<stdio.h>

/**
 * main -Entry point
 * The program prints the latters of the alphabet in both small letters
 * and capital letters using putchar only 3 times
 * Return: 0 Always (Success)
*/

int main(void)
{
	char C;
	char B;

	for (C = 'a'; C <= 'z'; C++)
	{
		putchar(C);
	}
	for (B = 'A'; B <= 'Z'; B++)
	{
		putchar(B);
	}
	putchar('\n');
	return (0);
}
