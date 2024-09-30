#include <stdio.h>
#include <stdbool.h>

int main() {

    int arr[100];

    int n;

    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }


    for(int i = 0; i < n-1; i++){
        for(int j = 0; j < n-1-i; j++){

            if(arr[j] < arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    bool inspection = true;
    
    for(int i = 1; i < n; i++){
        if(arr[i] == arr[0]){
            inspection = false;
        } 
    }


    if(inspection){
        printf("%d", arr[0]);
    }
    else{
        printf("%d", -1);
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}