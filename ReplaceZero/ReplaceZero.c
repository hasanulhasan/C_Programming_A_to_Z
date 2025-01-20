#include <stdio.h>

int main()
{
    int n, index;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &index);

    if (arr[index - 1] == 0)
    {
        arr[index - 1] = 1;
    }
    else
    {
        arr[index - 1] = 0;
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
