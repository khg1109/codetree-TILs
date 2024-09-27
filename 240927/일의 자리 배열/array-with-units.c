#include <stdio.h>

int main() {


    int arr[11];

    scanf("%d", &arr[0]);
    scanf("%d", &arr[1]);


    for(int i = 2; i < 10; i++){
        arr[i] = arr[i-1] + arr[i-2];

        arr[i] %= 10;    
    }

    for(int i = 0; i < 10; i++){
        printf("%d ", arr[i]);
    }


    return 0;
}