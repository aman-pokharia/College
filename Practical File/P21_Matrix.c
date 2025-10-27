#include <stdio.h>

void add(int a[3][3], int b[3][3])
{
    int result[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            result[i][j] = a[i][j] + b[i][j];
        }
    }
    printf("Addition of Matrix");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t", result[i][j]);
        }
        printf("\n");
    }
}

void transpose(int a[3][3])
{
    printf("Addition of Matrix");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t", a[j][i]);
        }
        printf("\n");
    }
}

void subtract(int a[3][3], int b[3][3])
{
    int result[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            result[i][j] = a[i][j] - b[i][j];
        }
    }
    printf("Addition of Matrix");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t", result[i][j]);
        }
        printf("\n");
    }
}

void multiplication(int a[3][3], int b[3][3])
{
    int product[3][3] = {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                product[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t", product[i][j]);
        }
        printf("\n");
    }
}

void uppertriangular(int a[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (j < i)
            {
                printf("0\t");
            }
            else
            {
                printf("%d\t", a[i][j]);
            }
        }
        printf("\n");
    }
}
void lowertriangular(int a[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (j > i)
            {
                printf("0\t");
            }
            else
            {
                printf("%d\t", a[i][j]);
            }
        }
        printf("\n");
    }
}

int main()
{
    int matrix1[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int matrix2[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int n;
    printf("Enter the operation:\n1. Add\n2. Subtract\n3. Multiply\n4. Transpose\n5. Upper Triangular matrix\n6. Upper Triangular matrix\n\nYour response: ");
    scanf("%d", &n);
    switch (n)
    {
    case 1:
        add(matrix1, matrix2);
        break;
    case 2:
        subtract(matrix1, matrix2);
        break;
    case 3:
        multiplication(matrix1, matrix2);
        break;
    case 4:
        transpose(matrix1);
        break;
    case 5:
        uppertriangular(matrix1);
        break;
    case 6:
        lowertriangular(matrix1);
        break;

    default:
        break;
    }
    return 0;
}