#include <stdio.h>
/**
 * main - print the string at the puts function
 * Description: using the main function
 * this program prints "programming is like building a multiligual puzzle
 * Return: 0
 */
int main(void)
{
int typeofinteger;
long int longinteger;
char charaacter;
float floatingtype;
long long int longerinteger;
printf("Size of a char: %ld byte(s)\n", sizeof(char));
printf("Size of an int: %ld byte(s)\n", sizeof(int));
printf("Size of a long int: %ld byte(s)\n", sizeof(long int));
printf("Size of a long long int: %ld byte(s)\n", sizeof(long long int));
printf("Size of a float: %ld byte(s)\n", sizeof(float));
printf("%lu\n", sizeof(char));
return (0);
}
