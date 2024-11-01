#include <stdio.h>

int main() {
    char c;
    scanf("%c", &c);

    char c1;

    c1 = c -1;
    if(c1 == 96){
        c1 = 122;
    }
    



    printf("%c", c1);

    // 여기에 코드를 작성해주세요.
    return 0;
}