#include "main.h"

/**
 * reverse_array - reverses elements int an array
 * @a: pointer to array that need reversing
 * @n: is the size of the array
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int j = n - 1;
	int Temp;

	while (i < j)
	{
		Temp = a[i];
		a[i] = a[j];
		a[j] = Temp;
		i++;
		j--;
	}
}
