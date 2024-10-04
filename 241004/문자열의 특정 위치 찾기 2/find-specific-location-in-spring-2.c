#include <stdio.h>
#include <string.h>

int main() {


    int cnt = 0;


    char n;
    scanf("%c", &n);

    char arr[5][20] = {"apple",
                      "banana",
                       "grape",
                     "blueberry",
                      "orange"};



    for(int i = 0; i < 5; i++){
        for(int j = 0; j < strlen(arr[i]); j++){
            if(arr[i][2] == n || arr[i][3] == n){
                cnt++;
                printf("%s\n", arr[i]);
                break;
            }

        }
    }


    printf("%d", cnt);





    // 여기에 코드를 작성해주세요.
    return 0;
}