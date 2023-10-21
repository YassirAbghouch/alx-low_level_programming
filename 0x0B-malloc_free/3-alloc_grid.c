#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - prints a grid of integers
 *
 * @width: the address of the two dimensional grid
 * @height: width of the grid
 *
 * Return: Nothing.
 */
int **alloc_grid(int width, int height)
{
int **matrix;
int i, j, x, y;
if (width <= 0 || height <= 0)
return (NULL);

matrix = (int **)malloc(height * sizeof(int *));
if (matrix == NULL)
return (NULL);

for (i = 0; i < height; i++)
{
matrix[i] = (int *)malloc(width * sizeof(int));
if (matrix[i] == NULL)
{
for (j = 0; j < i; j++)
{
free(matrix[j]);
}
free(matrix);
return (NULL);
}
}
for (x = 0; x < height; x++)
{
for (y = 0; y < width; y++)
{
matrix[x][y] = 0;
}
}
return (matrix);
}
