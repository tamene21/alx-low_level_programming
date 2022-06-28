#include "main.h"
#include<stdlib.h>
/**
 *alloc_grid - a function which returns a two dimensional integier
 *@width:width of the dimension
 *@height: height of the dimesion
 *Return: a two dimensional intiger
 */

int **alloc_grid(int width, int height)
{
	int a, b;
	int **dim;

	if (width < 1 || height < 1)
		return (NULL);

	dim = (int **)malloc(height * sizeof(int *));

	if (dim == NULL)
		return (NULL);

	for (a = 0; a < height; a++)
	{
		dim[a] = malloc(width * sizeof(int));
		if (dim[a] == NULL)
		{
			for (a = 0; a < height; a++)
			{
				free(dim[a]);
			}
			free(dim);
			return (NULL);
		}
	}

	for (a = 0; a < height; a++)
		for (b = 0; b < width; b++)
		{
			dim[a][b] = 0;
		}
	return (dim);
}
