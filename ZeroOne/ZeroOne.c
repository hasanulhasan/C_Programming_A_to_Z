#include <stdio.h>

int main()
{
    int n, zeroCount = 0, oneCount = 0;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {

        scanf("%d", &arr[i]);
        if (arr[i] == 0)
        {
            zeroCount++;
        }
        if (arr[i] == 1)
        {
            oneCount++;
        }
    }

    printf("%d %d", zeroCount, oneCount);
    return 0;
}
