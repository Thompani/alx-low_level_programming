#include <stdio.h>
/**
 * main - entry point
 * Description: prints if a number is zero, negative or positive
 * Return: 0
 */
int main(void)
{

char letters;

for (letters = 'a'; letters <= 'z'; letters++)
{
if (letters != 'e' && letters != 'q')
putchar(letters);
}
putchar('\n');
return (0);
}
