#include <stdio.h>

int main() {


    char arr[10][100];
    for(int i = 0; i < 10; i++){
        scanf("%s", &arr[i]);

        if(i % 2 == 0){
            printf("%s\n", arr[i]);
        }
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}