#include <stdio.h>

int cube(int *n)
{
    return (*n) * (*n) * (*n);
}

void cubes(int *arr, int rows, int cols)
{
    printf("Cubes of all elements in the array:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            int element = *(arr + i * cols + j);
            int result = cube(&element);
            printf("%d\t",result);
        }
        printf("\n");
    }
}

int main()
{
    int rows, cols;

    printf("Enter the number of rows array: ");
    scanf("%d", &rows);

      printf("Enter the number of columns array: ");
    scanf("%d", &cols);

    int arr[rows][cols];

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("Enter Element %d %d: ",i,j);
            scanf("%d", &arr[i][j]);
        }
    }

    cubes(&arr[0][0],rows,cols);

    return 0;
}