#include "main.h"

/**
 * print_sign - entry point
 * Description: A program that displays the 9 times table.
 *@c : integer value
 * Return: last digit number
 */
int print_sign(int c)
{

if (c < 0)
{
_putchar('-');
return (-1);
}
else if (c > 0)
{
_putchar('+');
return (1);
}
else
{
_putchar(48);
return (0);
}
