#include "main.h"

/**
 * *_strcpy - Copies the string pointed to by src to dest.
 * @dest: Pointer to the destination char array.
 * @src: Pointer to the source char array.
 *
 * Description: Copies the string pointed to by pointer 'src'
 * to the buffer pointed to by 'dest'.
 *
 * Return: Pointer to 'dest'.
 */
char *_strcpy(char *dest, char *src)
{
int z = -1;
do {
z++;
dest[z] = src[z];
} while (src[z] != '\0');
return (dest);
}

