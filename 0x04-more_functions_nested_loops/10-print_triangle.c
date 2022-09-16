#include "main.h"
#include <stdio.h>
/**
 * print_triangle - prints a half pyramid triangle
 * @size: defines the heght of triangle
 * Return: void / nothing
 */

void print_triangle(int size)
{
	int i, empty, j = 0;

	if (size > 0)
	{
		while (j < size)
		{
			empty = size - j - 1;
			while (i < size)
			{
				if (empty > i)
				{
					_putchar(' ');
				}
				else
				{
					_putchar('#');
				}
				i++;
			}
			j++;
			i = 0;
			_putchar ('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
