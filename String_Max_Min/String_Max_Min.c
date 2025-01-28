#include <stdio.h>
#include <string.h>

int main() {
    char str[3][1000];
    char maxStr[1000], minStr[1000];
    for(int i = 0; i<3; i++){
        scanf("%s", str[i]);
    }
    
    strcpy(maxStr, str[0]);
    for(int i = 0; i<3; i++){
        if(i == 2){
            int com = strcmp(maxStr, str[0]);
            if(com < 0){
                strcpy(maxStr, str[0]);
            }
        }else{
            int com = strcmp(maxStr, str[i+1]);
            if(com < 0){
                strcpy(maxStr, str[i+1]);
            }
        }
    }
    
    strcpy(minStr, str[0]);
    for(int i = 0; i<3; i++){
        if(i == 2){
            int com = strcmp(minStr, str[0]);
            if(com > 0){
                strcpy(minStr, str[0]);
            }
        }else{
            int com = strcmp(minStr, str[i+1]);
            if(com > 0){
                strcpy(minStr, str[i+1]);
            }
        }
    }
    printf("%s \n", minStr);
    printf("%s ", maxStr); 
    return 0;
}
