#include <stdio.h>  
int main() {  
   int N, i, j;  
printf("Enter the number of rows and columns: ");  
scanf("%d", &N);  
   for (i = 1; i<= N; i++) {  
      for (j = 1; j <= N; j++) {  
printf("%d ", j);  
      }  
printf("\n");  
   }  
    return 0;
}