#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int *arr = (int *)malloc(sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation was failed.\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        int x;
        scanf("%d", &x);
        int *temp = realloc(arr, (i + 1) * sizeof(int));
        arr = temp;
        arr[i] = x;
    }
    
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    free(arr);
    return 0;
}
