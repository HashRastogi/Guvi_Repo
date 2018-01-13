#include<stdio.h>
void main(){
    int n;
    scanf("%d", &n);
    
    int sum = (n * (n + 1)) / 2;
    printf("%d", sum);
}