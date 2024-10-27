#include <stdio.h>
#include <string.h>
 

int main() {

    char str[100];

    scanf("%s", str);


    char ch1 = str[0];
    char ch2 = str[1];

    for(int i = 0; i < strlen(str); i++){
        if(ch1 == str[i]){
            str[i] = ch2;
        }

        else if(ch2 == str[i]){
            str[i] = ch1;    
        }

    }


    printf("%s", str);

    // 여기에 코드를 작성해주세요.
    return 0;
}