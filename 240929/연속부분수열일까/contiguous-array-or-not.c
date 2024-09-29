#include <stdbool.h> 
#include <stdio.h>

int main() {

    int n1, n2;
    int A[100];
    int B[100];

    scanf("%d %d", &n1, &n2);

    for(int i = 0; i < n1; i++){
        scanf("%d", &A[i]);
    }

    for(int i = 0; i < n2; i++){
        scanf("%d", &B[i]);  
    }

    int cnta = 0;
    int cntb = 0;

    bool inspection = true;

    for(int i = 0; i < n1; i++){
        if(B[0] == A[i]){
            cnta = i;

            for(int j = 0; j < n2; j++){
                
                if(B[j] != A[cnta]){
                    inspection = false;
                    cntb = 0;
                    break;
                }
                cnta++;
                cntb++;
            }

            if(cntb == n2){
                break;
            }

        }
    }


    if(inspection){
        printf("Yes");
    }
    else{
        printf("No");
    }
        
    return 0;
}