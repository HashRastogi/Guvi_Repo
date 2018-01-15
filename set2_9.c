#include<stdio.h>

void main(){
    int num, fac = 1;
    scanf("%d", &num);
    for(int i = 2; i <= num; i++){
        fac *= i;
    }
    printf("%d", fac);
}