#include <stdio.h>

/**
 * main - Prints all possible different combinations of two digits.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
int i = '0';
int j = '0';

while (i <= '9')
{
while (j <= '9')
{
if (!(i > j) || i == j)
{
putchar(i);
putchar(j);
if (i == '8' && j == '9')
{
break;
}
else
{
putchar(',');
putchar(' ');
}
}
j++;
}
j = '0';
i++;
}

putchar('\n');
return (0);
}

