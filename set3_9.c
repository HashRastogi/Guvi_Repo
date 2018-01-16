#include<stdio.h>

void main(){
    int num;
    int hours, minutes;
    scanf("%d", &num);
    
    hours = num/60;
    minutes = num%60;
    printf("%d %d",hours,minutes);
}