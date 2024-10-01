#include <stdio.h>

int main() {

    int arr[2][4];

    int row1, row2 = 0;

    int column1, column2, column3, column4 = 0;

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 4; j++){
            scanf("%d", &arr[i][j]);

            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }


    
    // 여기에 코드를 작성해주세요.
    return 0;
}