#include <stdio.h>

int main() {

    int n;
    scanf("%d", &n);

    int arr[100] = {0}; 
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    int minNum = arr[0];

    for(int i = 0; i < n; i++){
        if(minNum > arr[i]){
            minNum = arr[i];
        }
    }

    int cnt = 0;
    for(int i = 0; i < n; i++){
        if(minNum == arr[i]){
            cnt++;
        }
    }


    printf("%d %d", minNum, cnt);


    
    // 여기에 코드를 작성해주세요.
    return 0;
}