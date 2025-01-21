#include <stdio.h>

int main()
{
    int n, flag = 0;
    scanf("%d", &n);
    int x[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &x[i][j]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                if (x[i][j] != 1)
                {
                    flag = 1;
                    break;
                }
            }
            else
            {
                if (x[i][j] != 0)
                {
                    flag = 1;
                    break;
                }
            }
        }
        if (flag == 0)
        {
            break;
        }
    }

    if (flag)
    {
        printf("NO\n");
    }
    else
    {
        printf("YES\n");
    }
    return 0;
}
