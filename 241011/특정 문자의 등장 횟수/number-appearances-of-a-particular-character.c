#include <stdio.h>
#include <stdbool.h>
#include <string.h>



int main() {

    char str[100];

    scanf("%s", &str);

    
    bool eecnt = 0;
    bool ebcnt = 0;


    for(int i = 0; i < strlen(str)-1; i++){
        if(str[i] == 'e' && str[i+1] == 'e'){
            eecnt++;
        }
        else if(str[i] == 'e' && str[i+1] == 'b'){
            ebcnt++;
        }    
    }

    printf("%d %d", eecnt, ebcnt);





    // 여기에 코드를 작성해주세요.
    return 0;
}