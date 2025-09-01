//Fibonacci Series upto n terms 0 1 1 2 3 5... n terms
#include<stdio.h>
int main(){
    int n;
    printf("Enter number of terms: ");
    scanf("%d",&n);
    if(n<1){
        printf("\nNumber of terms cannot be negative or zero");
    }
    int a=0,b=1; //initializing first two terms
    for(int i=1;i<=n;i++){
        if(i>2){
            int c=a+b;
            a=b;
            b=c;
            printf("%d ",c);
        }
        else if(i==1){
            printf("%d ",a);
        }
        else if(i==2){
            printf("%d ",b);
        }
    }
    return 0;
}