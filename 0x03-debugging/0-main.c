#include<stdio.h>
#include "main.h"
/*
 *main-test function for positive or negative
 *Return: 0
 */
void positive_or_negative(int i)
{
	if (i >= 0)
	{
		printf("%d is positive\n", i);
	}
	else
	{
		printf("%d is negative\n", i);
	}
}
int main(void)
{
	int i;

	i = 98;
	positive_or_negative(i);
	return (0);
}
