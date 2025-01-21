#include <stdio.h>

int main() {
    int n, m, z;
    scanf("%d %d %d", &n, &m, &z);
    int arr[z];

    int matrix[n][m];
    int count[1001] = {0};

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &matrix[i][j]);
            count[matrix[i][j]]++;
        }
    }

    for (int i = 0; i < z; i++) {
        int num;
        scanf("%d \n", &num);
        arr[i] = count[num];
    }
    
    for (int i = 0; i < z; i++) {
        printf("%d\n", arr[i]);
    }
    return 0;
}
