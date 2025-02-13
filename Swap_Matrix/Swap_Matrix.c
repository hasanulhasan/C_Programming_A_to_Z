#include <stdio.h>

int main() {
    int row, col;
    scanf("%d %d", &row, &col);

    int arr[row][col];
    
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i = 0; i < row; i++) {
        int tempVal = arr[i][0];
        arr[i][0] = arr[i][col - 1];
        arr[i][col - 1] = tempVal;
    }

    for (int j = 0; j < col; j++) {
        int tempVal = arr[0][j];
        arr[0][j] = arr[row - 1][j];
        arr[row - 1][j] = tempVal;
    }

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}