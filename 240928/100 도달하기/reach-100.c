#include <stdio.h>

int main() {

    int arr[100];

    int n;

    scanf("%d", &n);



    arr[0] = 1;
    arr[1] = n;

    for(int i = 2; i < 100; i++){

        arr[i] = arr[i-1] + arr[i-2];

       if(arr[i] >= 100){
            break;

        }
    }


    for(int i = 0; i < 100; i++){

        printf("%d ", arr[i]);
            
        if(arr[i] >= 100){
            break;

        }
    }

    // 여기에 코드를 작성해주세요.
    return 0;
}