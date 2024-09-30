#include <stdio.h>
#include <stdbool.h>

#define MAX_N 1000
#define MAX_NUM 1000

int main() {

    int n;
    int nums[MAX_N];

    int count[MAX_NUM + 1] = {0};

    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d", &nums[i]);
    }


    for(int i = 0; i < n; i++){
        count[nums[i]]++;
    }



    int answer = -1;

    for(int i = MAX_NUM; i >= 0; i--){
        if(count[i] == 1){
            answer = i;
            break;
        }
    }



    printf("%d", answer);

    // 여기에 코드를 작성해주세요.
    return 0;
}