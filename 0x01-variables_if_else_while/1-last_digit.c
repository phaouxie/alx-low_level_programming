#include<stdlib.h>
#include<time.h>
#include<stdio.h>
/**
*main - assign a random number to the variable
*based a condition
*Return : always 0
*Return: End of program
*/
int main(void)
{
int n;
int a;
srand(time(0));
n = rand() - RAND_MAX / 2;

a = n % 10;
printf("Last digit of %d is ", n,a);
if (a > 5)
{
printf("greater than 5");
}
if (a == 0)
{
	printf("0");
}
if (a < 6 && a != 0)
{
printf("less than 6 not 0");
}
printf("\n");
return (0);
}
