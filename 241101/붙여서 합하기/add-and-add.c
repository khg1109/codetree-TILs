#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char A[10];
    char B[10];
    char AB[20];
    char BA[20];

    scanf("%s", A);
    scanf("%s", B);

    strcpy(AB, A);
    strcat(AB, B);
    
    strcpy(BA, B);
    strcat(BA, A);

    printf("%d", atoi(AB) + atoi(BA));

    // 여기에 코드를 작성해주세요.
    return 0;
}