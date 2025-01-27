#include <stdio.h>

int main()
{
    int n, x, y, count = 0;
    scanf("%d %d %d", &n, &x, &y);
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= x && arr[i] <= y)
        {
            count++;
        }
    }
    printf("%d", count);
    return 0;
}
