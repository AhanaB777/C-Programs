/* Pascal's triangle pattern
      1
     1 1
  1 (1+1) 1
1 (1+2) (1+2) 1

*/ 
#include <stdio.h>
int main() {
   int n,val;
   printf("Enter the number of rows: ");
   scanf("%d", &n);
   for (int i = 0; i < n; i++) {
      for (int space = 1; space <= n - i; space++){
         printf("  ");
      }
      for (int j = 0; j <= i; j++) {
         if (j == 0 || i == 0)
            val = 1;
         else
            val = val * (i - j + 1) / j;
         printf("%4d", val);
      }
      printf("\n");
   }
   return 0;
}
