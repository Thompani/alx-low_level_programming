#include "main.h"

/**
 * print_last_digit - entry point
 * Description: A program that displays the 9 times table.
 *@p : integer value
 * Return: last digit number
 */
int print_last_digit(int p)
{
if (p < 0);
p = -p;
_putchar(p % 10 + '0');
return (p % 10);
}
