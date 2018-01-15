#include<stdio.h>

void main(){
    int num1, num2;
    scanf("%d%d", &num1, &num2);
    if(num1%2 != 0)
    num1++;
    else
    num1+=2;
    for(int i=num1; i <= num2 ; i+= 2){
        printf("%d ",i);
    }
}