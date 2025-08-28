/*  n x n square pattern
    *****
    *****
    *****
    *****
    *****     
*/
#include<stdio.h>
int main(){
    int n; //n decides the total number of rows and columns
    printf("Enter the number of rows: "); // user input for n 
    scanf("%d",&n);
    for(int i=1;i<=n;i++){ 
        for(int j=1;j<=n;j++){
            printf("*");
        }
        printf("\n");
    }
}