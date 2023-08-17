#include "main.h"

/**
 * print_line - Draws a straight line in the terminal
 * @n: number of times to print the character '_'
 */
void print_line(int n)
{
if (n <= 0)
{
_putchar('\n');
}
else
{
int i;
for (i = 1; i <= n; i++)
{
_putchar('_');
}
_putchar('\n');
}
}

