#include <stdio.h>
#include <stdbool.h>

int main() {


    int n;
    scanf("%d", &n);
    int arr[100];
    int maxDex = 0;

    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    bool inspection = true;

    int max = arr[0];
    int a = 0;

    while(1){
        
        int max_idx = 0;

        for(int i = 1; i < n; i++){
            if(arr[i] > arr[max_idx]){
                max_idx = i;
            }
        }

        printf("%d ", max_idx + 1);

        if(max_idx == 0){
            break;
        }

        n = max_idx;

        
    }
    return 0;
}