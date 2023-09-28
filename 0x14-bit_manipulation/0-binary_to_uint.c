#include "main.h"

/**
 * binary_to_uint - Converts a binary number to unsigned int
 * @b: Points to a string of 0 and 1 chars
 *
 * Return: the converted number,
 * or 0 if @b is NULL or contains non-binary chars
 */
unsigned int binary_to_uint(const char *b)
{
int i;
unsigned int num = 0;

if (!b)
return (0);

for (i = 0; b[i]; i++)
{
if (b[i] < '0' || b[i] > '1')
return (0);
num = 2 * num + (b[i] - '0');
}
return (num);
}
