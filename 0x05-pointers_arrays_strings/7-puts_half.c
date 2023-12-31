#include "main.h"

/**
 * puts_half - Prints half of a string followed by a new line.
 * @str: Pointer to the input string.
 *
 * Return: None.
 */
void puts_half(char *str)
{
int full_string, half_string;
full_string = 0;
while (str[full_string] != '\0')
{
full_string++;
}
half_string = full_string / 2;
if (full_string % 2 == 1)
{
half_string++;
}
while (half_string < full_string)
{
_putchar(str[half_string]);
half_string++;
}
_putchar('\n');
}

