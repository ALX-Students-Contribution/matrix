#include "matrix.h"

int main(int argc, char *argv[])
{
        int size;
        int i, j, row;

        if (argc < 2)
        {
                printf("usage: ./matrix <size>\n");
                return 1;
        }

	size = atoi(argv[1]);

        int **matrix;

        matrix = malloc(sizeof(int *) * size);

        if (matrix == NULL)
        {
                return (400);
        }

        for (row = 0; row < size; row++)
        {
                matrix[row] = malloc(sizeof(int) * size);

                if (matrix[row] == NULL)
                {
                        return (400);
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

        for (i = 0; i < size; i++)
        {
                for(j = 0; j < size; j++)
                {
			scanf("%d%*c", &matrix[i][j]);
		}
        }

        for (i = 0; i < size; i++)
        {
                for(j = 0; j < size; j++)
                {
                        printf(" %i", matrix[i][j]);
                }
                printf("\n");
        }

        for (row = 0; row < size; row++)
        {
                free(matrix[row]);
        }

        free(matrix);

        return (0);
}
