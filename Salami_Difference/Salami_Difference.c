#include <stdio.h>

int main()
{
    int n, max = 0;
    scanf("%d", &n);
    int x[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &x[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (x[i] > max)
        {
            max = x[i];
        }
    }

    for (int i = 0; i < n; i++)
    {
        x[i] = max - x[i];
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", x[i]);
    }

    return 0;
}
