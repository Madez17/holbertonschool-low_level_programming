#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{

int n;
int lastd;

srand(time(0));
n = rand() - RAND_MAX / 2;
scanf("%d", &n);
lastd = n % 10;

if (n > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, lastd);
}
else if (n == 0)
{
printf("Last digit of %d is %d and is 0\n", n, lastd);
}
else
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastd);
}
return (0);
}
