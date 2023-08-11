#include <stdio.h>

/**
 * main - Prints all single digit numbers of base 10 starting from 0,
 *        followed by lowercase letters from 'a' to 'f'.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
int num;
char letter;

for (num = 0; num < 10; num++)
{
putchar((num % 10) + '0');
}

for (letter = 'a'; letter <= 'f'; letter++)
{
putchar(letter);
}

putchar('\n');
return (0);
}

