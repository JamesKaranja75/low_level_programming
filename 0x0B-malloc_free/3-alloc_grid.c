#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Creates a 2D grid of integers with
 * the specified width and height.
 * @width: The width of the grid.
 * @height: The height of the grid.
 *
 * Return: Pointer to the 2D array of integers,
 * or NULL if memory allocation fails
 * or if width or height is less than or equal to 0.
 */
int **alloc_grid(int width, int height)
{
int **mee;
int x, y;
if (width <= 0 || height <= 0)
return (NULL);
mee = malloc(sizeof(int *) * height);
if (mee == NULL)
return (NULL);
for (x = 0; x < height; x++)
{
mee[x] = malloc(sizeof(int) * width);
if (mee[x] == NULL)
{
for (; x >= 0; x--)
free(mee[x]);
free(mee);
return (NULL);
}
}
for (x = 0; x < height; x++)
{
for (y = 0; y < width; y++)
mee[x][y] = 0;
}
return (mee);
}
