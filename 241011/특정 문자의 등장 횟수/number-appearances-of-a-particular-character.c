#include <stdio.h>
#include <stdbool.h>
#include <string.h>



int main() {

    char str[100];

    scanf("%s", &str);

    
    int eecnt = 0;
    int  ebcnt = 0;


    for(int i = 0; i < strlen(str); i++){
        if(str[i] == 'e' && str[i+1] == 'e'){
            eecnt++;
        }
        if(str[i] == 'e' && str[i+1] == 'b'){
            ebcnt++;
        }    
    }

    printf("%d %d", eecnt, ebcnt);





    // 여기에 코드를 작성해주세요.
    return 0;
}