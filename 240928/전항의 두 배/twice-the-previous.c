#include <stdio.h>

int main() {

    int arr[10];

    int n;
    int n2;

    scanf("%d %d", &n, &n2);

    arr[0] = n;
    arr[1] = n2;

    for(int i = 2; i < 10; i++){
        arr[i] = arr[i-1] + (2*arr[i-2]);
    }


    for(int i = 0; i < 10; i++){
        printf("%d ", arr[i]);
    }

    // 여기에 코드를 작성해주세요.
    return 0;
}