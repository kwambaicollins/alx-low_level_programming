#include"main.h"
#include<unistd.h>
/**
*_puchar - writes the character to stdout
*@c The character to print
*Return: On success 1
*On error -1 returned, and errno set appropriately
*/
int_putchar(char c)
{
return(write(1,&c,1));
}
