#include <stdio.h>

int main() {


    int n, m;

    scanf("%d %d", &n, &m);


    int arr[10][10] = {0};


    for(int i = 0; i < m; i++){
        int a,b;

        scanf("%d %d", &a, &b);

        arr[a-1][b-1] = 1;
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