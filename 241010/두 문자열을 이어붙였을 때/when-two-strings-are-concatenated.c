#include <stdio.h>
#include <string.h>

int main() {
    char A[100];
    char B[100];

    // 문자열 입력
    scanf("%s", A);
    scanf("%s", B);

    // AB와 BA를 저장할 충분한 크기의 배열
    char AB[200];
    char BA[200];

    // 문자열 연결
    strcpy(AB, A); // A를 AB에 복사
    strcat(AB, B); // B를 AB에 이어붙임

    strcpy(BA, B); // B를 BA에 복사
    strcat(BA, A); // A를 BA에 이어붙임

    // 문자열 비교
    if (strcmp(AB, BA) == 0) {
        printf("true\n");
    } else {
        printf("false\n");
    }

    return 0;
}