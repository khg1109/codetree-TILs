#include <stdio.h>

int main() {
    char arr[6] = {'l', 'E', 'B', 'R', 'O', 'S'};
    char ch;
    
  
    scanf(" %c", &ch); 
 

    for (int i = 0; i < 6; i++) {
      if (ch == arr[i]) { 
        printf("%d\n", i); 
        break; 
      }
    }

    return 0;
}