#include <stdio.h>
#include <string.h>

int main() {


    char str[100];
    int n;

    scanf("%s", &str);
    scanf("%d", &n);


    for(int i = 0; i < n; i++){

        if(str[i] == '\0'){
            break;
            
        }
        printf("%c", str[strlen(str)-1-i]);
    }

    // 여기에 코드를 작성해주세요.
    return 0;
}