#include <stdio.h>
#include <string.h>

int main() {

    int n;

    scanf("%d", &n);

    char arr[10][100];

    for(int i = 0; i < n; i++){
        scanf("%s", &arr[i]);
    }
    
    int cnt = 0;
    int cnta = 0;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < strlen(arr[i]); j++){
            if(arr[i][j] == 'a'){
                cnta++;
            }
            cnt++;

        }
    }
    printf("%d %d", cnt, cnta);




    // 여기에 코드를 작성해주세요.
    return 0;
}