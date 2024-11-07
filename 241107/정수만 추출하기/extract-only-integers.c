#include <stdio.h>
#include <string.h>
#include <stdlib.h>



int main() {

    char str1[10];
    char str2[10];

    char num1[20];
    char num2[20];

    scanf("%s %s", str1, str2);

    for(int i = 0; i < strlen(str1); i++){
        if(str1[i] < 48 || str1[i] > 57){
            break;
        }
        num1[i] = str1[i];
    }

    for(int i = 0; i < strlen(str2); i++){
        if(str2[i] < 48 || str2[i] > 57){
            break;
        }
        num2[i] = str2[i];
    }

    printf("%d ", atoi(num2) + atoi(num1));
    

    // 여기에 코드를 작성해주세요.
    return 0;
}