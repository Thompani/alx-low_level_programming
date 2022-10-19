#include "main.h"

/**
 * print_last_digit - entry point
 * Description: A program that displays the 9 times table.
 *@c : integer value
 * Return: last digit number
 */
int print_last_digit(int c)
{
int p;

if (c < 0)
c = -c;
p = c % 10;
if (p < 10)
p = -p;

_putchar(p % 10 + '0');

return (p % 10);
}
