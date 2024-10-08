#include <stdio.h>
#include <string.h>


int main() {

    char arr[10][20];


    for(int i = 0; i < 10; i++){
        scanf("%s", &arr[i]);
    }
    char n;


    getchar();

    scanf("%c", &n);

    for(int i = 0; i < 10; i++){
        int a = strlen(arr[i]);
        if(arr[i][a - 1] == n){
            printf("%s\n", arr[i]);
            

        }
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}