#include <stdio.h>
/**
 * main - entry point
 * Description: prints if a number is zero, negative or positive
 * Return: 0
 */
int main(void)
{

int letters;

for (letters = 0; letters <= 9; letters++)
{
putchar((letters % 10) + '0');
if (letters < 9)
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
