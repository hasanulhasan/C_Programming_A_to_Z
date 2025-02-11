#include <stdio.h>

int checkIsIntiger(int x, int y){
    if (y == 0) { 
        return -1;
    }
    
    if (x % y == 0) { 
        return x / y; 
    } else {
        return -1;   
    }
}

int main()
{
    int testCase;
    scanf("%d", &testCase);
    long long arr[testCase][4];
    int resultArr[testCase];
    
    for(int i = 0; i<testCase; i++){
        for(int j = 0; j<4; j++){
            scanf("%lld", &arr[i][j]);
        }
    }
    
    for(int i = 0; i<testCase; i++){
        int multipleResult = arr[i][1] * arr[i][2] * arr[i][3];
        int result = checkIsIntiger(arr[i][0],multipleResult);
        resultArr[i] = result;
    }
    for(int i = 0; i<testCase; i++){
        printf("%d \n", resultArr[i]);
    }
    return 0;
}