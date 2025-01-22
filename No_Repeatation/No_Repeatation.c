#include <stdio.h>

int f[100000] = {0};

int main()
{
    int n, count = 0;
    scanf("%d", &n);
    int a[n + 5];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n; i++)
    {
        f[a[i]] = f[a[i]] + 1;
    }

    for (int i = 0; i < 10 * 5; i++)
    {
        if (f[i] == 1)
        {
            count++;
        }
    }
    printf("%d", count);
    return 0;
}