#include <stdio.h>
#include <string.h>

int main() {

    for(int i = 0; i < 10; i++){

        char str[100];
        scanf("%s", str);

        if(strcmp(str,"END") == 0){
            break;
            
        }    
        int len = strlen(str);

        

        for(int j = len-1 ; j >= 0; j--){
            printf("%c", str[j]);

        }
        printf("\n");

    }
    // 여기에 코드를 작성해주세요.
    return 0;
}