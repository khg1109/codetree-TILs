#include <stdio.h>
#include <string.h>


int main() {
    char str[100];
    int q;

    // 문자열과 정수 q 입력 받기
    scanf("%s", str);
    scanf("%d", &q);

    int num;

    for(int i = 0; i < q; i++){
        scanf("%d", &num);
        
        if (1 == num) {
            int a, b;
            scanf("%d %d", &a, &b);
            char ach = str[a-1];
            char bch = str[b-1];
            str[a-1] = bch;
            str[b-1] = ach;
        } 
        else if (2 == num) {
            char c, v;
            // 공백을 추가하여 개행 문자를 무시하고 문자 입력 받기
            scanf(" %c", &c);
            scanf(" %c", &v);
            char ach2 = c;
            char bch2 = v;



            for(int i = 0; i < strlen(str); i++){
                if(c == str[i]){
                    str[i] = v;

                }
            }

        }


        printf("%s\n", str);

    }

    return 0;
}