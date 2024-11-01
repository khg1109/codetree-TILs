#include <stdio.h>
#include <string.h>

#include <stdlib.h>

int main() {
    
    char str[101];
    scanf("%s", str);

    int sum = 0;

    for(int i = 0; i < strlen(str); i++){
        
        
        if(str[i] >= 48 && str[i] <= 57){  
            sum += str[i] - '0';

        }
    }

    printf("%d", sum);



    // 여기에 코드를 작성해주세요.
    return 0;
}