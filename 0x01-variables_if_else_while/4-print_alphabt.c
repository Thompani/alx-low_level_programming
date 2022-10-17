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
if (letters != 'e' and letters != 'q')
putchar(letters);
}
putchar('\n');
return (0);
}
