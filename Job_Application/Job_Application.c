#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 1)
        {
            printf("Entry-level candidate \n");
        }
        if (arr[i] >= 1 && arr[i] <= 3)
        {
            printf("Junior candidate \n");
        }
        if (arr[i] >= 4 && arr[i] <= 7)
        {
            printf("Mid-level candidate \n");
        }
        if (arr[i] > 7)
        {
            printf("Senior candidate \n");
        }
    }
    return 0;
}
