#include <stdio.h>
#include <string.h>


int main() {

    char str[100];

    fgets(str, 100, stdin);
    
    char n;

    scanf("%c ", &n);


    int cnt = 0;
    for(int i = 0; i < strlen(str); i++){
        if(str[i] == n){
            cnt++;
        }
    }


    printf("%d", cnt);



    // 여기에 코드를 작성해주세요.
    return 0;
}