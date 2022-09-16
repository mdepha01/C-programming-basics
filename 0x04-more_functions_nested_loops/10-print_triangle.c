#include "main.h"
#include <stdio.h>
/**
 * print_triangle - prints a half pyramid triangle
 * @size: defines the heght of triangle
 * Return: void / nothing
 */

void print_triangle(int size)
{
	int i, j, k;

	for (i = 1; i <= size; i++)
	{
		for (j = i; j < size; j++)
		{
			_putchar(' ');
		}
		for (k = 1; k <= i; k++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
