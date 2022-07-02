#include<stdlib.h>
#include<time.h>
#include<stdio.h>
/**
*main - assign alphabets in lower case
*Return: always 0
*return : End of the program
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
