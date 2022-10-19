#include "main.h"
/**
*prints_times_table - entry point
* @n: the starting integer
* Description: A program that displays the 9 times table.
* Return: void
*/
void print_times_table(int n)
{
	int p, j, k;

	for (p = 0; p <= n; p++)
	{
		for (j = 0; p <= n; j++)
		{
			k = p * j;
			if (p == 0)
			{
			_putchar(k + '0');
			}
			else if (p <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(' ');
				_putchar(k + '0');
		}
			else if (p >= 10 && p < 100)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(k / 10 + '0');
				_putchar(k % 10 + '0');
		}
		else
			{
				_putchar(',');
				_putchar(' ');
		_putchar((k / 100) + '0');
		_putchar(k % 10 % 10 + '0');
		_putchar(k % 10 + '0');
	}
		}

	_putchar('\n');
}
}
