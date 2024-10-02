#include <stdio.h>

int main() {

    int n;
    
    scanf("%d", &n);

    int arr[10][10] = {0};
    
    int cnt = 1;
    for(int i = n-1; i >= 0; i--){
        if(i % 2 == 1){
            for(int j = n-1; j >= 0; j--){
                arr[j][i] = cnt;
                cnt++;
            }
        }
        else{
            for(int j = 0; j < n; j++){
                arr[j][i] = cnt;
                cnt++;
            }
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