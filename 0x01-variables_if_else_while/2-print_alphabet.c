#include<stdlib.h>
#include<time.h>
#include<stdio.h>
/**
*alphabets in lower cases
*main - entry point
*Return: always 0

*/
int main(void)
{
int ch;
for (ch = 97; ch <= 122; ch++)
{
putchar(ch);	
}
putchar(10);
return (0);
}
