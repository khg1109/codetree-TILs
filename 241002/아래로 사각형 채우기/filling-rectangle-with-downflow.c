#include <stdio.h>

int main() {

    int n;
    scanf("%d", &n);

    int arr[10][10] = {0};

    int cnt = 1;
   
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
           arr[j][i] = cnt;
           cnt++;

        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");

    }


    // 여기에 코드를 작성해주세요.
    return 0;
}