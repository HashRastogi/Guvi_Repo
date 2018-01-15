#include<stdio.h>
#include<string.h>

void main(){
    char num[10];
    int flag = 1;
    scanf("%s",num);
    
    for(int i = 0; i < strlen(num)/2; i++){
        if(num[i] != num[strlen(num)-1-i]){
            flag = 0;
            break;
        }
    }
    
    if(flag){
        printf("Pallindrome");
    }
    else{
        printf("Not Pallindrome");
    }
}

