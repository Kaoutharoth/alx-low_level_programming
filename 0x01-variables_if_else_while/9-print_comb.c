#include <stdio.h>

/**
 * main - Prints numbers between 0 to 9 and letters between a to f.
 * 
 * Return: Always 0 (success)
*/
int main(void)
{
int n;
for (n=48; n<58; n++)
{
putchar(n);
if(n != 57)
{
putchar(',');
putchar('.');
}
}
putchar('\n');
return (0);
}
