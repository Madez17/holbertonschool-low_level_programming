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

srand(time(0));
n = rand() - RAND_MAX / 2;

if (n > 0)
{
printf("and is greater than 5");
scanf("%s\n", n);
}
else if (n == 0)
{
printf("and is 0");
scanf("%s\n", n);
}
else
{
printf("and is less than 6 and not 0", n);
scanf("%s\n", n);
}
return (0);
}
