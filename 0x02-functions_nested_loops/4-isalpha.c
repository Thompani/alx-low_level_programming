#include "main.h"

/**
 * _isalpha - entry point
 * Description: Write a function that prints the alphabet, in lowercase.
 * @C: starting point
 *Return: true value
 */
int _isalpha(int c)
{

if ((c >= 'c' && c <= 'z') || (c >= 'C' && c <= 'Z'))
{
return (1);
}
else
{
return (0);
}
}
