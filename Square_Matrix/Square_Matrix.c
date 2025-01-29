#include <stdio.h>

int diagonalUnitArrCheck(int row, int col, int arr[row][col])
{
    if (row != col)
    {
        return 0;
    }
    int n = row;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (i == j || i + j == n - 1)
            {
                if (arr[i][j] != 1)
                {
                    return 0;
                }
            }
            else
            {
                if (arr[i][j] != 0)
                {
                    return 0;
                }
            }
        }
    }
    return 1;
}

int main()
{
    int row, col;
    scanf("%d %d", &row, &col);
    int arr[row][col];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    if (diagonalUnitArrCheck(row, col, arr))
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}