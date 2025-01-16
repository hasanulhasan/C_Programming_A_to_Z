#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int x;
    scanf("%d", &x); 
    
    if(x<=100){
       printf("Nothing");
    }
    else if(x > 100 && x <= 250){
        printf("Three Fuchka");
    }
    else if(x > 250 && x <= 500){
        printf("Three Small Burger");
    }
    else if(x > 500 && x < 1000){
        printf("One Large Pizza");
    }
    else{
        printf("Three Kacchi");
    }
    return 0;
}