#include "main.h"

/**
 * _strlen - Calculates the length of a string.
 * @s: The string to be checked.
 *
 * Return: The length of the string.
 */
int _strlen(char *s)
{
int str_length = 0;
while (s[str_length])
{
str_length++;
}
return (str_length);
}

