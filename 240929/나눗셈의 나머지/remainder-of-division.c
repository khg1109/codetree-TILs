#include <stdio.h>

int main() {

    int a;
    int b;

    scanf("%d %d", &a, &b);

    int cnt = 0;
    int cntArr[100] = {0};

    while(a > 1){
        cntArr[a % b]++;
        a /= b;
        cnt++;

    }
    int sum = 0;
    int sum2 = 0;

    for(int i = 0; i < cnt; i++){
        sum = cntArr[i] * cntArr[i];
        sum2 += sum;

    }

    printf("%d", sum2);

    // 여기에 코드를 작성해주세요.
    return 0;
}