#include <stdio.h>
#include <string.h>

int main() {

    char arr[10][100];
    
    


    for(int i = 0; i < 10; i++){
        scanf("%s", arr[i]);
    }


    int cnt = 0;
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < strlen(arr[i]); j++){
            cnt++;
        }
    }


    printf("%d", cnt);
    
    // 여기에 코드를 작성해주세요.
    return 0;
}