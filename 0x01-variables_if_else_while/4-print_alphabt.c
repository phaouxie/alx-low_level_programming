#include<stdio.h>
/**
 * print alphabet in lowercases
 * main -Entry point
 * Return: End of program
 */
int main(void)
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
if (ch != 'q' && ch != 'e')
{
putchar(ch);
}
}
putchar('\n');
return (0);
}
