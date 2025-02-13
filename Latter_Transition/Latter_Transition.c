#include <stdio.h>
#include <string.h>

int main() {
    char str1[101], str2[101], str3[101];

    scanf("%100s", str1);
    scanf("%100s", str2);
    scanf("%100s", str3);

    int len1 = strlen(str1);
    int len2 = strlen(str2);
    int len3 = strlen(str3);

    if (len1 != len2 || len2 != len3) {
        printf("Error: Strings must have the same length\n");
        return 1; 
    }

    int count = 0;
    for (int i = 0; i < len1; i++) {
        char letter1 = str1[i];
        char letter2 = str2[i];
        char letter3 = str3[i];

        if (letter1 == letter2 && letter2 == letter3) {
            continue;
        } else if (letter1 == letter2 || letter2 == letter3 || letter1 == letter3) {
            count += 1;
        } else {
            count += 2;
        }
    }

    printf("%d\n", count);

    return 0;
}
