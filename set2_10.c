#include<stdio.h>

void main(){
    int num;
    scanf("%d",&num);
    
    for(int i = 1; i < 6; i++){
        printf("%d ",num*i);
    }
}