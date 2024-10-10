#include <stdio.h>
#include <string.h>



int main() {

    int n;

    scanf("%d", &n);

    char str[100][100];
    int cnt = 0;


    for(int i = 0; i < n; i++){
        scanf("%s", &str[i]);
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < strlen(str[i]); j++){
            printf("%c", str[i][j]);
            cnt++;
            if(cnt == 5){
                printf("\n");
                cnt = 0;
                   
            }
        }
    }



    // 여기에 코드를 작성해주세요.
    return 0;
}