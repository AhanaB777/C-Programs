/*  Left Star Triangle
       *
      **
     ***
    ****
   *****     
*/
#include <stdio.h>
int main() {
    int n; //n decides the total number of rows
    printf("Enter the number of rows: "); // user input for n 
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int k=n-i;k>=1;k--){
            printf(" ");
        }
        for(int j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}