#include <stdio.h>

/**
 * main - Prints all possible different combinations of two digits.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
int i = '0';
int j;

while (i <= '9')
{
j = i + 1; // Start from the next digit after i
while (j <= '9')
{
putchar(i);
putchar(j);
if (!(i == '8' && j == '9'))
{
putchar(',');
putchar(' ');
}
j++;
}
i++;
}

putchar('\n');
return (0);
}

