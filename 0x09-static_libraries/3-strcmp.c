#include "main.h"

/**
 * _strcmp - Compares two strings.
 * @s1: Pointer to the first string.
 * @s2: Pointer to the second string.
 * Return: Value less than 0 if s1 is less than s2,
 *         value greater than 0 if s1 is greater than s2,
 *         and 0 if strings are equal.
 */
int _strcmp(char *s1, char *s2)
{
int counter = 0;
int compare_value;

while (s1[counter] == s2[counter] && s1[counter] != '\0')
{
counter++;
}

compare_value = s1[counter] - s2[counter];
return (compare_value);
}

