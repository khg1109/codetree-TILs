#include <stdio.h>

int main() {


    int n;

    scanf("%d", &n);

    int arr[n+1];


    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);

        if(arr[i] % 2 == 0){
            printf("%d ", arr[i]);
        }
    }

    // 여기에 코드를 작성해주세요.
    return 0;
}