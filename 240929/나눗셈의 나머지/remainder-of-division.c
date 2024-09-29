#include <stdio.h>

int main() {
    int a, b;

   
    scanf("%d %d", &a, &b);

    int cntArr[100] = {0}; 
    int sumOfSquares = 0;


    while (a > 1) {
         
        cntArr[a%b]++; 
        a /= b; 
    }
   
    for (int i = 0; i < b; i++) {
        sumOfSquares += cntArr[i] * cntArr[i];
    }

    printf("%d\n", sumOfSquares);

    return 0;
}