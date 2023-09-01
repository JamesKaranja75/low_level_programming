#include "main.h"

/**
 * _strcat - Concatenates two strings.
 * @dest: Pointer to the destination string.
 * @src: Pointer to the source string.
 * Return: Pointer to the destination string.
 */
char *_strcat(char *dest, char *src)
{
int length_of_dest = 0, z;

while (dest[length_of_dest] != '\0')
{
length_of_dest++;
}

for (z = 0; src[z] != '\0'; z++, length_of_dest++)
{
dest[length_of_dest] = src[z];
}

dest[length_of_dest] = '\0';
return (dest);
}
