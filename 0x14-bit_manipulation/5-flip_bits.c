#include "main.h"

/**
 * flip_bits - Returns the number of bits you will get from the flip
 * @n: First number
 * @m: Second number
 * Return: Number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
int i, count = 0;
unsigned long int current;
unsigned long int xor_result = n ^ m;

for (i = 63; i >= 0; i--)
{
current = xor_result >> i;
if (current & 1)
count++;
}
return (count);
}
