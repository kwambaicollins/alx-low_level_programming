#include<stdio.h>/**
*main - Access point
*Description: print numbers of base 10
*Return: Always 0(corect)
*/
int main(void)
{
int n;

for (n = 0; n <= 9; n++)
{
putchar(n + 48);
}
putchar(n);
return (0);
}
