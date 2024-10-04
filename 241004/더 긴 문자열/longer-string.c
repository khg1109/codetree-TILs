#include <stdio.h>

#include <string.h>

int main() {
    char str1[100];
    char str2[100];


    scanf("%s %s", &str1, &str2);

    if(strlen(str1) > strlen(str2)){
        printf("%s %d", str1, strlen(str1));
    }
    else if(strlen(str1) == strlen(str2)){
        printf("same");
    }
    else{
        printf("%s %d", str2, strlen(str2));
    }
    
    // 여기에 코드를 작성해주세요.
    return 0;
}