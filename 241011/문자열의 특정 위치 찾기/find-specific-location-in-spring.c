#include <stdio.h>
#include <string.h>




int main() {

    char str[21];
    int cnt = -1;
    char c;

    scanf("%s", &str);
    
    getchar();
    scanf("%c", &c);
    

    
    for(int i = 0; i < strlen(str); i++){
        if(str[i] == c){
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