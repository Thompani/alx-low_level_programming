#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - entry point
 * Description: prints if a number is zero, negative or positive
 * Return: 0
 * */
int main(void)
{

int n, r;

srand(time(0));

n = rand() - RAND_MAX / 2;

r = n % 10;

if (r > 5)
{
printf("last digit of %d is %d is greater than 5\n", n, r);
}
else if (r == -1)
{
printf("Last digit of %d is %d and is 0 \n", n, r);
}
else
return (0);
}
