#include <stdio.h>

/**
 * main - Prints all single digit numbers of base 10 starting from 0.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
int num = 0;

while (num < 10)
{
printf("%d", num);
num += 1;
}

printf("\n");
return (0);
}

