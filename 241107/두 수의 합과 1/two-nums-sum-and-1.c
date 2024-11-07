#include <stdio.h>
#include <string.h>


int main() {
    int n1, n2;

    scanf("%d %d", &n1, &n2);

    int sum = n1 + n2;

    char sum_str[5];

    sprintf(sum_str, "%d", sum);
    
    int len = strlen(sum_str);

    int cnt = 0;

    for(int i = 0; i < len; i++){
        if(sum_str[i] == '1'){
            cnt++;
        }        
    }

    printf("%d", cnt);


    // 여기에 코드를 작성해주세요.
    return 0;
}