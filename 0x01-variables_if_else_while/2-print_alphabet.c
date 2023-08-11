#include <stdio.h>
#include <ctype.h>

/**
 * main - Prints the alphabet in lowercase,
 *        followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int lowerCase = 'a';
while (lowerCase <= 'z')
{
putchar(lowerCase);
lowerCase += 1;
}
putchar('\n');
return (0);
}
