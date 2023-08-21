#include "main.h"

/**
 * print_rev - Prints a string in reverse, followed by a new line.
 * @s: Pointer to the string.
 *
 * Return: None.
 */
void print_rev(char *s)
{
int start = 0;
while (s[start])
{
start++;
}
while (start--)
{
_putchar(s[start]);
}
_putchar('\n');
}

