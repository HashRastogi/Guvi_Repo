#include<stdio.h>

int MAX(int a, int b){
    return a > b ? a : b;
}

void main(){
    int num1, num2, num3, max = 0;
    scanf("%d%d%d", &num1, &num2, &num3);
    
    max = MAX(num1, num2);
    max = MAX(max, num3);
    printf("%d", max);
    
}