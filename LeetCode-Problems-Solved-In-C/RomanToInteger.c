// Roman to Integer Conversion
#include <stdio.h>
#include<string.h>
int romanVal(char str) {
    switch(str){ 
        case 'I': return 1;
        case 'V': return 5;
        case 'X': return 10;
        case 'L': return 50;
        case 'C': return 100;
        case 'D': return 500;
        case 'M': return 1000;
        default: return 0;
    } 
}
int main() {
    char str[20];
    printf("Enter a Roman number = "); 
    scanf("%s",&str);
    int length= strlen(str);
    int result=0;
    for(int i=0;i<=length-1;i++){
        int current=romanVal(str[i]);
        int next=romanVal(str[i+1]);
        if(current>=next){
            result=result+current;
        }
        else{
            result=result-current;
        }
    } 
    
    printf("Roman numeral %s in Integer is %d",str,result);

    return 0;
}