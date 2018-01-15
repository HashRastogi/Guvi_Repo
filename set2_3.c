#include<stdio.h>

void main(){
    int num, flag = 1;
    scanf("%d", &num);
    
    for(int i = 2; i < num/2; i++){
        if(num % i == 0){
            flag = 0;
            break;
        }
    }
    if(flag){
        printf("Prime");
    }
    else{
        printf("Not Prime");
    }
}