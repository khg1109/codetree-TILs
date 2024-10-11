#include <stdio.h>
#include <stdbool.h>
#include <string.h>



int main() {

    char str[100];

    scanf("%s", &str);

    
    bool eecnt = 0;
    bool abcnt = 0;


    for(int i = 0; i < strlen(str)-1; i++){
        if(str[i] == 'e' && str[i+1] == 'e'){
            eecnt++;
        }
        else if(str[i] == 'a' && str[i+1] == 'b'){
            abcnt++;
        }    
        
    }


    printf("%d %d", eecnt, abcnt);

    



    // 여기에 코드를 작성해주세요.
    return 0;
}