#include <stdio.h>
#include <string.h>



int main() {

    int cnt = 0;

    char str_n[200][200];
    int str_nIndex = 0;

    while(1){
        char str[201];
        scanf("%s", str);

        if(strcmp(str, "0") == 0){
            break;
        }
        cnt++;

        if(cnt % 2 == 1){
            strcpy(str_n[str_nIndex++], str);
        }
    }

    printf("%d\n", cnt);

    for(int i = 0; i < str_nIndex; i++){
        printf("%s\n", str_n[i]);
    }




    // 여기에 코드를 작성해주세요.
    return 0;
}