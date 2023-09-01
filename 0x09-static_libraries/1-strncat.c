#include "main.h"

/**
 * _strncat - Concatenates two strings.
 * @dest: Pointer to the destination string.
 * @src: Pointer to the source string.
 * @n: Number of bytes to be concatenated.
 * Return: Pointer to destination string.
 */
char *_strncat(char *dest, char *src, int n)
{
int length_of_string = 0, z;
/* z is a counter for n bytes of src to be concatenated */
/* length_of_string = length of destination string */

while (dest[length_of_string] != '\0')
{
length_of_string++;
}

for (z = 0; z < n && src[z] != '\0'; z++, length_of_string++)
{
dest[length_of_string] = src[z];
}

dest[length_of_string] = '\0';
return (dest);
}

