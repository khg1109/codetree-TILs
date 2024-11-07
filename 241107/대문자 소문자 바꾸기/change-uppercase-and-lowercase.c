#include <stdio.h>
#include <string.h>

int main() {

    char str[30];

    scanf("%s", str);


    for(int i = 0; i < strlen(str); i++){
        if(str[i] >= 97 && str[i] <= 122){
            printf("%c", str[i] - 'a' + 'A');
        }
        else if(str[i] >= 65 && str[i] <= 90){
            printf("%c", str[i] - 'A' + 'a');
        }


    }
    // 여기에 코드를 작성해주세요.
    return 0;
}