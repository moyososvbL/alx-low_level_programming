#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - print if the number is positive, zero, or negative
*
* Return: 0
*/
int main(void)
{
int n;
char last[] = "Last gigit of";

srand(time(0));
n = rand() - RAND_MAX / 2;
printf("%s %d and is ",last, n, n % 10);
if (n % 10 > 5)
{
printf("greater than 5\n");
}
else if (n % 10 == 0)
{
printf("0\n");
}
else
{
printf("less tham 6 and not 0\n");
}
return (0);
}


