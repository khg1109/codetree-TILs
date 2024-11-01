#include <stdio.h>

int main() {

    char a;
    char b;

    scanf(" %c", &a);
    scanf(" %c", &b);


    printf("%d ", a + b);

    if(a > b){
        printf("%d ", a - b);
    }
    else{
        printf("%d ", b - a);

    }


    // 여기에 코드를 작성해주세요.
    return 0;
}