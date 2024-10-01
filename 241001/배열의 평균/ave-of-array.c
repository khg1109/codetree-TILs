#include <stdio.h>

int main() {

    int arr[2][4];

    int row1 = 0;
    int row2 = 0;

    int column1 = 0;
    int column2 = 0;
    int column3 = 0;
    int column4 = 0;
    int total = 0;


    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 4; j++){
            scanf("%d", &arr[i][j]);
        }
    }

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 4; j++){

            total += arr[i][j];
            
            if(i == 0){
                row1 += arr[i][j];
            } 
            else if(i == 1){
                row2 += arr[i][j];
            }

            if(j == 0){
                column1 += arr[i][j];
            }
            else if(j == 1){
                column2 += arr[i][j];
            }
            else if(j == 2){
                column3 += arr[i][j];
            }
            else if(j == 3){
                column4 += arr[i][j];
            }
        }
    }

    printf("%.1f %.1f", row1/4.0, row2/4.0);
    printf("\n");

    printf("%.1f %.1f %.1f %.1f\n", column1/2.0, column2/2.0, column3/2.0, column4/2.0);

    printf("%.1f\n", total/8.0);

    return 0;
}