#include <stdio.h>

void makeMonument(int n)
{
    for (int i = 1; i <= n; i++)
    {
        printf("%d ", i);
    }
    for (int i = n - 1; i >= 1; i--)
    {
        printf("%d ", i);
    }
}

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
        makeMonument(arr[i]);
        printf("\n");
    }
    return 0;
}