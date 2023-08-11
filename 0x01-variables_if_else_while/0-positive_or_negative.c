#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
*main - Prints if numbers is positive zero and neg
*Return: Always (correct)
*/

int main(void)

{
int n;

sprand(time(0));
n = rand() - RAND_MAX / 2;

if (n > 0)
{
printf("%d is positive\n", n);
}
else if (n == 0)
{
printf("%d is zero\n", n);
}
