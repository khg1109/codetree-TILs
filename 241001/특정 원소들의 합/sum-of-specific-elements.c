#include <stdio.h>

int main() {


    int sum = 0;
    
    int arr[4][4];

    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            scanf("%d", &arr[i][j]);   
        }
    }



    for(int i = 0; i < 4; i++){
        for(int j = 0; j < i+1; j++){
            sum += arr[i][j];
        }
        printf("\n");
    }


    printf("%d ", sum);

    
    // 여기에 코드를 작성해주세요.
    return 0;
}