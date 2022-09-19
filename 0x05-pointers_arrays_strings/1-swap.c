#include "main.h"

/**
 * swap_int -  swaps two numbers by reference
 * @a: a pointer variable passed as argument
 * @b: a pointer variable passed as argument
 * Return: void / nothing
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
