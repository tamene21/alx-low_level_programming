#include "main.h"
#include<stdlib.h>
/**
 * free_grid - a functionto free up a previously created two dimensional array
 * @grid: a grid to be cleared
 * @height:the height of the grid
 * Return: Always 0 for succes
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(dim[i]);
	}
	free(dim);




}
