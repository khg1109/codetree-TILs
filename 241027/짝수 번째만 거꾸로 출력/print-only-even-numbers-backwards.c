#include <stdio.h>
#include <string.h>

int main() {
    char str[100];


    scanf("%s", str);
    char str2[100]; 

    int cnt = 0;
    
    for(int i = 0; i < strlen(str); i++){
        if(i % 2 == 1){
            str2[cnt++] = str[i];
        }
    }


    for(int i = cnt - 1; i >= 0; i--){
        printf("%c", str2[i]);
    }


    return 0;
}