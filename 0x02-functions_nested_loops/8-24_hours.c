#include <stdio.h>
#include "main.h"
/**
 * jack_bauer - prints a minute of every hour
 * Return: void
 */

void jack_bauer(void)
{
	int Hour, Minute;

	for (Hour = 0; Hour <= 23; Hour++)
	{
		for (Minute = 0; Minute <= 59; Minute++)
		{
			_putchar((Hour / 10) + '0');
			_putchar((Hour % 10) + '0');
			_putchar(':');
			_putchar((Minute / 10) + '0');
			_putchar((Minute % 10) + '0');
			_putchar('\n');
		}
	}
}
