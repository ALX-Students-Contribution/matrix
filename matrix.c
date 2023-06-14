#include "matrix.h"

int main(int argc, char *argv[])
{
	int size = atoi(argv[1]);
	int i, j;

	if (argc != 2)
	{
		printf("usage: ./matrix <size>\n");
		return 1;
	}


	int **matrix;

	matrix = malloc(sizeof(int *) * size);

	if (matrix == NULL)
	{
		return (NULL);
	}

	for (row = 0; row < size; row++)
	{
		matrix[row] = malloc(sizeof(int) * size);

		if (matrix[row] = NULL)
		{
			return (NULL);
		}
	}

        printf("Enter a %d x %d matrix.\nIn this format: ", size, size);

	for (i = 0; i < size; i++)
	{
		for(j = 0; j < size; j++)
		{
			printf(" %d", rand() % 10);
		}
		printf(",");
	}
	printf("\n");

	
	return (0);
}
