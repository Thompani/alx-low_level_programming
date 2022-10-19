#include "main.h"

/**
 * print_alphabet_x10 - entry point
 * Description: Write a function that prints the alphabet, in lowercase.
 */
void print_alphabet_x10(void)
{
char a;

for (a = 'a'; a <= 'z'; a++)
{
for (a = 0; a <= 10; a++)
{
_putchar(a);
}
}
_putchar('\n');
}
