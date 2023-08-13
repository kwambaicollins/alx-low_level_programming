#include <stdio.h>
/**
*main - Access point
*Return: Always 0(corect)
*/
int main(void)
{
int n = 97;
while (n <= 122)
{
if (n == 101 || n == 113)
{
n++;
continue;
}
putchar(n);
n++;
}
putchar (n);
return (0);
}
