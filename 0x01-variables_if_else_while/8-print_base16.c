#include <stdio.h>
/**
 * main - entry point
 * Description: prints if a number is zero, negative or positive
 * Return: 0
 */
int main(void)
{

char letters;
int letters1;

for (letters1 = 0; letters1 < 10; letters1++)
{
putchar((letters1 % 10) + '0');
}
for (letters = 'a'; letters <= 'f'; letters++)
{
putchar(letters);
}
putchar('\n');
return (0);
}
