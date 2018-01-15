#include<stdio.h>

void main(){
    int num1, num2, flag;
    scanf("%d%d", &num1, &num2);
    
    for(int i = num1 + 1; i < num2; i++){
        flag = 1;
        for(int j=2; j <= i/2; j++){
            if(i%j == 0){
            flag = 0;
            break;
            }
        }
        if(flag)
        printf("%d ",i);
        
    }
}