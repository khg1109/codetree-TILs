#include <stdio.h>
#include <stdbool.h>

int main() {

    int n,q;
    scanf("%d %d", &n, &q);

    int arr[100] = {0};

    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    bool inspection = true;

    for(int i = 0; i < q; i++){

        int num;
        int question[2];

        scanf("%d", &num);
        
        if(num == 1){
            scanf("%d", &question[0]);
            printf("%d\n", arr[question[0]-1]);
        
        }
        else if(num == 2){
            scanf("%d", &question[0]);

            for(int i = 0; i < n; i++){
                if(arr[i] == question[0]){
                    printf("%d\n", i+1);
                    inspection = false;
                    break;
                }
            }
            if(inspection){
                printf("%d\n", 0);
            }
        }

        else if(num == 3){
            scanf("%d %d", &question[0], &question[1]);

            for(int i = question[0]; i <= question[1]; i++){
                printf("%d ", arr[i-1]);
            }
            printf("\n");
        }
    }


    // 여기에 코드를 작성해주세요.
    return 0;
}