#include "main.h"

/**
 * print_alphabet_x10 - entry point
 * Description: Write a function that prints the alphabet, in lowercase.
 */
void print_alphabet_x10(void)
{
  char a, a1;

for (a1 = 0; a1 <= 9; a1++)
{
for (a = 'a'; a <= 'z'; a++)
{
_putchar(a);
}
_putchar('\n');
}
}
