#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - prints a grid of integers
 *
 * @grid: the address of the two dimensional grid
 * @height: width of the grid
 *
 * Return: Nothing.
 */
void free_grid(int **grid, int height)
{
int i;

if (grid == NULL || height <= 0)
return;

for (i = 0; i < height; i++)
{
free(grid[i]);
}

free(grid);
}
