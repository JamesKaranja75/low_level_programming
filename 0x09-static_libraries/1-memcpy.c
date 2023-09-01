#include "main.h"

/**
 * _memcpy - Function that copies @n bytes from memory area @src
 * to memory area @dest
 * @dest: Memory area to copy to
 * @src: Memory area to copy from
 * @n: Number of bytes to copy
 * Return: A pointer to @dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i = 0;
while (i < n)
{
dest[i] = src[i];
i++;
}
return (dest);
}

