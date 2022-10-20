#include "main.h"
/**
*prints_times_table - entry point
* @n: the starting integer
* Description: A program that displays the 9 times table.
* Return: void
*/
void print_times_table(int n)
{
	int p = 0, j, k;

	if ( n > 15 || n < 0)
		return;
	while (p <= n)
	{
			 for (j = 0; j <= n; j++)
			 {
			k = p * j;
			if (k > 99)
			{
				_putchar(k + '0');
				_putchar(k / 100 + '0');
				_putchar((k / 10 % 10) + '0');
				_putchar(k % 10 + '0');
			}
			else if (k > 9)
			{
				_putchar(' ');
				_putchar(k / 10 + '0');
				_putchar(k % 10 + '0');
			}
			else if (j != 0)
			{
			_putchar(' ');
			_putchar(' ');
			_putchar(k + '0');
		}
		else
_putchar(k + '0');

				if (j !=n)
				{
			_putchar(',');
			_putchar(' ');
	}
		}

	_putchar('\n');
	p++;
}
}
