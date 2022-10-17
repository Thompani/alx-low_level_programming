#include <stdio.h>
/**
 * main - entry point
 * Description: prints if a number is zero, negative or positive
 * Return: 0
 */
int main(void)
{

int letters;

for (letters = 0; letters < 10; letters++)
{
putchar( (letters % 10) + '0');
}
putchar("\n");
return (0);
}
