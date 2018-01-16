#include<stdio.h>
#include<ctype.h>

void main(){
    char str[1000];
    int flag = 1;
    scanf("%s", str);
    
    for(int i = 0; str[i] != '\0'; i++){
        if(!isdigit(str[i])){
            flag = 0;
        }
    }
    if(flag)
    printf("Numeric");
    else
    printf("Not Numeric");
}