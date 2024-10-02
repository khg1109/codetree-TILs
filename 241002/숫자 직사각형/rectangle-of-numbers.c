#include <stdio.h>

int main() {
    int arr[3][5];
    int n, m;

    scanf("%d %d", &n, &m);
    int cnt = 1;


    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            arr[i][j] = cnt++;
        }
    }


    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}