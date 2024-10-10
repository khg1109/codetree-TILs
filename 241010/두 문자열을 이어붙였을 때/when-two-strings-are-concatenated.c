#include <stdio.h>
#include <string.h>


int main() {

    char AB[100] = "";
    char BA[100] = "";


    char A[100];
    char B[100];

    scanf("%s", &A);
    scanf("%s", &B);


    strcat(AB, A);
    strcat(AB, B);

    strcat(BA, B);
    strcat(BA, A);


    if(strcmp(AB, BA) == 0){
        printf("true");
    }
    else{
        printf("false");
    }


    // 여기에 코드를 작성해주세요.
    return 0;
}