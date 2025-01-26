#include <stdio.h>

int main() {
    int n, count = 0, sum = 0;
    long long time;
    scanf("%d %lld", &n, &time);
    int arr[n];
    
    for(int i = 0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    
    for(int i = 0; i<n; i++){
        sum = sum + arr[i];
        if(sum > time){
            break;
        }
        count++;
    }
    
    printf("%d", count);
    return 0;
}
