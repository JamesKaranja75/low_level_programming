#include "main.h"
/**
 * print_binary - Prints the binary representation of a number
 * @n: Number to be printed
 */
void print_binary(unsigned long int n)
{
int i;
unsigned long int current;
int count = 0;
for (i = 63; i >= 0; i--)
{
current = n >> i;
if (current & 1)
{
_putchar('1');
count++;
}
else if (count)
_putchar('0');
}
if (!count)
_putchar('0');
}
