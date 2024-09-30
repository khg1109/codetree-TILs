#include <stdio.h>

int main() {


    int arr[10];

    for(int i = 0; i < 10; i++){
        scanf("%d", &arr[i]);
    }

    int maxNum = arr[0];

    for(int i = 0; i < 10; i++){
        if(maxNum < arr[i]){
            maxNum = arr[i];

        }
    }


    printf("%d", maxNum);



    // 여기에 코드를 작성해주세요.
    return 0;
}