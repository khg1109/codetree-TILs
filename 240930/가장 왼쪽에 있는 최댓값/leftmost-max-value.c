#include <stdio.h>
#include <stdbool.h>

int main() {


    int n;
    scanf("%d", &n);
    int arr[1000];
    int maxDex = 0;

    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }


    int prev_max_idx = n;

    while(1){
        
        int max_idx = 0;

        for(int i = 1; i < prev_max_idx; i++){
            if(arr[i] > arr[max_idx]){
                max_idx = i;
            }
        }

        printf("%d ", max_idx + 1);

        if(max_idx == 0){
            break;
        }

        prev_max_idx = max_idx;

        
    }
    return 0;
}