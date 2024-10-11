#include <stdio.h>
#include <string.h>




int main() {

    char str[20];
    int cnt = -1;
    char c[5];

    scanf("%s", &str);
    scanf("%s", &c);

    
    for(int i = 0; i < strlen(str); i++){
        if(str[i] == c[0]){
            cnt = i;
            break;
        }
    }

    if(cnt == -1){
        printf("No");
    }
    else{
        printf("%d ", cnt);

    }
    // 여기에 코드를 작성해주세요.
    return 0;
}