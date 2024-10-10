#include <stdio.h>
#include <string.h>

int main() {
    // 여기에 코드를 작성해주세요.

    char str[100];

    scanf("%s", &str);
    char str2[100];

    for(int i = 0; i < strlen(str); i++){
        str2[i] = str[strlen(str)-1-i];
       
       

    }

    for(int i = 0; i < strlen(str); i++){
        
        if(i % 2 == 0){
            printf("%c", str2[i]);

        }
    }
    return 0;
}