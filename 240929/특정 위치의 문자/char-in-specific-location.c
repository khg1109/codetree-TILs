#include <stdio.h>
#include <stdbool.h>
int main() {
  char arr[6] = {'L', 'E', 'B', 'R', 'O', 'S'};
  char ch;
    
  
  scanf(" %c", &ch); 
  bool inspection = true; 


  for (int i = 0; i < 6; i++) {
    if(arr[i] == ch){
      printf("%d", i);
      inspection = false;
    }
  }

  if(inspection){
    printf("None");

  }

    return 0;
}