#include <stdio.h>
#include <string.h>


int main() {

    char str[101];

    scanf("%s", str);
    

    for(int i = 0; i < strlen(str); i++){


        if((str[i] >= 48 && str[i] <= 57)||(str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122)){

            if (str[i] >= 65 && str[i] <= 90) {
                printf("%c", str[i] - 'A' + 'a'); 
            } else {
                printf("%c", str[i]);
            }
        }


    }

    // 여기에 코드를 작성해주세요.
    return 0;
}